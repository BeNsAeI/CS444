#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *dir;
    struct dirent *dp;
    char * file_name;
    dir = opendir(".");
    while ((dp=readdir(dir)) != NULL) {
        printf("debug: %s\n", dp->d_name);
        if ( !strcmp(dp->d_name, ".") || !strcmp(dp->d_name, "..") )
        {
            // do nothing (straight logic)
        } else {
            file_name = dp->d_name; // use it
            printf("file_name: \"%s\" at sector %d.\n",file_name, blk_rq_pos);
        }
    }
    closedir(dir);
    return 0;
}
