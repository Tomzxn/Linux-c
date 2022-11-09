#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd1, fd2;
    int ret;
    char buf[10];

    fd1 = open("./test.txt",O_RDWR | O_TRUNC);
    if(-1 == fd1)
    {
        perror("open error");
        return 1;
    }

    fd2 = dup(fd1);//复制文件标识符
    if(-1 == fd2)
    {
        perror("dup error");
        close(fd1);
        return 1;
    }

    ret = write(fd2,"Hello World",11);
    if(-1 == ret)
    {
        perror("write error");
        close(fd1);
        close(fd2);
        return 1;
    }

    lseek(fd1, 0 ,SEEK_SET);

    ret = read(fd1, buf, 11);
    if(-1 == ret)
    {
        perror("read error");
        close(fd1);
        close(fd2);
        return 1;
    }

    printf("read: %s\n",buf);

    close(fd1);
    close(fd2);
    return 0;
}