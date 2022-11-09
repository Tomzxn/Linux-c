#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/*
int main(void)
{
    int fd1, fd2;

    fd1 = open("./test.txt", O_RDONLY);

    fd2 = fcntl(fd1, F_DUPFD, 0);//功能性函数：目前功能为文件描述符的复制，数字为文件描述符的期望值，实际值大于等于期望值

    printf("fd1: %d, fd2: %d\n", fd1, fd2);

    close(fd1);
    close(fd2);
    return 0;
}
*/

int mian(void)
{
    int fd;
    int ret;
    fd = open("./test.txt",O_RDONLY);
    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    ret = fcntl(fd, F_GETFL);
    if(-1 == ret)
    {
        perror("fcntl error");
        close(fd);
        return 1;
    }
    printf("falgs: %x\n",ret);

    ret = fcntl(fd, F_SETFL, ret | O_APPEND);
    if(-1 == ret)
    {
        perror("fcntl error");
        close(fd);
        return 1;
    }

    ret = fcntl(fd, F_GETFL);
    if(-1 == ret)
    {
        perror("fcntl error");
        close(fd);
        return 1;
    }
    
    printf("falgs: %x\n",ret);

    close(fd);
    return 0;
}
