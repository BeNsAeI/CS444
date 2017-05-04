/*
 * LOOK I/O scheduler for OSU CS444 Spring 2017
 * Written by Levi Willmeth, Behnam Saeedi, and Zhaoheng Wang
 */
#include <linux/blkdev.h>
#include <linux/elevator.h>
#include <linux/bio.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/init.h>

struct sstf_data {
	struct list_head queue;
};

static void sstf_merged_requests(struct request_queue *q, struct request *rq,
				 struct request *next)
{
	list_del_init(&next->queuelist);
}

static int sstf_dispatch(struct request_queue *q, int force)
{
	struct sstf_data *nd = q->elevator->elevator_data;

	if (!list_empty(&nd->queue)) {
		struct request *rq;
		rq = list_entry(nd->queue.next, struct request, queuelist);
		list_del_init(&rq->queuelist);
		elv_dispatch_sort(q, rq);
		return 1;
	}
	return 0;
}

static void sstf_add_request(struct request_queue *q, struct request *rq)
{
	/*
	* Following stepps needed to be taken for this implementation of insertion sort:
	* Create an instance of sstf_data that points to the elevator data (it is called nd)
	* nd will contain request queue's elevator's elevator data (pointer)
	* check if the q->elevator->elevator_data->queue is empty or not
	* if it is empty or has only one member:
	* 	- add the new request to end queue list
	* if the queue has more than 1 memeber in it:
	* 	- this means there are membesrs of queuelist available in the nd->queue
	* 	- insert the new request in proper position
	* 		- create an iterator of type request
	* 		- go through each member in the nd->queue that is of type queuelist
	* 		- insert the new request in the list if the current position **
	*/
	printk(KERN_DEBUG "adding new request...\n");
	struct sstf_data *nd = q->elevator->elevator_data;
	/* checking if the queue is not empty */
	if(!list_empty(&nd->queue)) {
		printk(KERN_DEBUG "queue is not emty, generating an itterator...\n");
		/* Creatinga n itterator */
		struct request * it;
		/* create the distance indecies */
		int new_distance;
		/* Itterate: */
		list_for_each_entry(it, &nd->queue, queuelist) {
			sector_t new_sector = blk_rq_pos(rq);
			sector_t current_sector = blk_rq_pos(it);
			new_distance = new_sector - current_sector;
			printk(KERN_DEBUG "Distance is %i\n", new_distance);
			if (new_distance > 0)
				list_add_tail(&rq->queuelist, &it->queuelist);
		}
	}
	printk(KERN_DEBUG "adding to tail...\n");
	list_add(&rq->queuelist, &nd->queue);
}

static struct request *
sstf_former_request(struct request_queue *q, struct request *rq)
{
	struct sstf_data *nd = q->elevator->elevator_data;

	if (rq->queuelist.prev == &nd->queue)
		return NULL;
	return list_entry(rq->queuelist.prev, struct request, queuelist);
}

static struct request *
sstf_latter_request(struct request_queue *q, struct request *rq)
{
	struct sstf_data *nd = q->elevator->elevator_data;

	if (rq->queuelist.next == &nd->queue)
		return NULL;
	return list_entry(rq->queuelist.next, struct request, queuelist);
}

static int sstf_init_queue(struct request_queue *q, struct elevator_type *e)
{
	struct sstf_data *nd;
	struct elevator_queue *eq;

	eq = elevator_alloc(q, e);
	if (!eq)
		return -ENOMEM;

	nd = kmalloc_node(sizeof(*nd), GFP_KERNEL, q->node);
	if (!nd) {
		kobject_put(&eq->kobj);
		return -ENOMEM;
	}
	eq->elevator_data = nd;

	INIT_LIST_HEAD(&nd->queue);

	spin_lock_irq(q->queue_lock);
	q->elevator = eq;
	spin_unlock_irq(q->queue_lock);
	return 0;
}

static void sstf_exit_queue(struct elevator_queue *e)
{
	struct sstf_data *nd = e->elevator_data;

	BUG_ON(!list_empty(&nd->queue));
	kfree(nd);
}

static struct elevator_type elevator_sstf = {
	.ops = {
		.elevator_merge_req_fn		= sstf_merged_requests,
		.elevator_dispatch_fn		= sstf_dispatch,
		.elevator_add_req_fn		= sstf_add_request,
		.elevator_former_req_fn		= sstf_former_request,
		.elevator_latter_req_fn		= sstf_latter_request,
		.elevator_init_fn		    = sstf_init_queue,
		.elevator_exit_fn		    = sstf_exit_queue,
	},
	.elevator_name = "sstf",
	.elevator_owner = THIS_MODULE,
};

static int __init sstf_init(void)
{
	return elv_register(&elevator_sstf);
}

static void __exit sstf_exit(void)
{
	elv_unregister(&elevator_sstf);
}

module_init(sstf_init);
module_exit(sstf_exit);


MODULE_AUTHOR("Group 10-03");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Look - No-op IO scheduler");
