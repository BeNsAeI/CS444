import threading
import signal
import random
from time import sleep
import sys

def smoker(name, a, b):
    print "{0} is ready to chew bubblegum and smoke cigarettes."\
	" And he's all out of bubblegum.\n".format(name),
    rNameA, a = resourceNames[a], resources[a]
    rNameB, b = resourceNames[b], resources[b]
    while(1):
	if a.isSet() and b.isSet():
	    print "{0} picks up the {1} and {2} and makes a cigarette.\n".format(name, rNameA, rNameB),
	    a.clear()
	    b.clear()
	    sleep(1)
    print "{0} dies of lung cancer.\n".format(name),

def agent(name):
    print "{0} is on the job!\n".format(name),
    while(1):
	a, b = random.sample([0,1,2], 2)
	ra, na =  resources[a], resourceNames[a]
	rb, nb = resources[b], resourceNames[b]
	print "{0} sets some {1} and {2} on the table.\n".format(name, na, nb),
	ra.set()
	rb.set()
	while ra.isSet() or rb.isSet():
	    print "{0} is waiting for the table to clear.\n".format(name),
	    sleep(1)
	print "{0} notices the table is empty.\n".format(name)

def die(signal, frame):
        print "Killing child processes."
	for t in threads:
	    t.join()
	print "It's a ghost town."
        sys.exit(0)
signal.signal(signal.SIGINT, die)

smokers = "TobaccoMan PaperBoy MatchesDude".split()
tobacco = threading.Event()
paper = threading.Event()
matches = threading.Event()
resources = [tobacco, paper, matches]
resourceNames = 'tobacco paper matches'.split()
threads = []

a = threading.Thread(target=agent, args=("Agent 007",))
threads.append(a)
a.start()

for i, name in enumerate(smokers):
    t = threading.Thread(target=smoker, args=(name, (i+1)%3, (i+2)%3))
    threads.append(t)
    t.start()

for t in threads:
    t.join()

print "All done!"
