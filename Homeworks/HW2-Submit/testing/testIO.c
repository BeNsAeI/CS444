#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char** argv)
{
    struct dirent *dp;
    DIR *dfd;
    char *dir ;
    dir = argv[1] ;

    if ( argc == 1 ){
        printf("Usage: %s dirname\n",argv[0]);
        return 0;
    }

    if ((dfd = opendir(dir)) == NULL){
        fprintf(stderr, "Can't open %s\n", dir);
        return 0;
    }

    char filename_qfd[100] ;
    char new_name_qfd[100] ;

    while ((dp = readdir(dfd)) != NULL){
        struct stat stbuf ;
        sprintf( filename_qfd , "%s/%s",dir,dp->d_name) ;
        if( stat(filename_qfd,&stbuf ) == -1 ){
            printf("Unable to stat file: %s\n",filename_qfd) ;
            continue ;
        }
    }
    return 0;
}
