// implimentation of du command

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

 

int main(int argc, char const *argv[])
{
    int fd1 ; 
    float fd2 , ret ;
    struct stat statbuf;
    //stat function calling
    ret = stat(argv[1],&statbuf);
    fd2 = (statbuf.st_blksize);
    //printing the data
    printf("%ld\t %s\n",statbuf.st_blocks/2, argv[1]);
    return 0;
}
