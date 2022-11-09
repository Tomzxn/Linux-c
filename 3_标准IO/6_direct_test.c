#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

static char buf[8192] __attribute((aligned (4096)));

int main(void)
{
    int fd;
    int count;

    fd = open("./test.txt", O_WRONLY | O_CREAT | O_EXCL | O_DIRECT, 0666);//跳过缓冲区直接存入磁盘
    if(-1 == fd)
    {
        perror("open error");
        return -1;
    }

    count = 10000;

    while(count--)
    {
        if(4096 != write(fd, buf, 4096))
        {
            perror("write error");
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 0;
}

