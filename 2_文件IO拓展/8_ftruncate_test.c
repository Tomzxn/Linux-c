#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("./test.txt",O_WRONLY);

    ftruncate(fd,4096);//基于文件描述符进行文件截断
    
    close(fd);
}