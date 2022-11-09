#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd1 = open("./test.txt",O_WRONLY | O_TRUNC | O_APPEND);
    if(-1 == fd1)
    {
        perror("open error");
        return 1;
    }

    int fd2 = open("./test.txt",O_WRONLY | O_APPEND);
    if(-1 == fd2)
    {
        perror("open error");
        close(fd1);
        return 1;
    }
    
    int ret = write(fd1,"HELLO WORLD\n",13);
    if(-1 == ret)
    {
        perror("write error");
        close(fd1);
        return 1;
    }

    ret = write(fd2,"12345678901\n",13);
    if(-1 == ret)
    {
        perror("write error");
        close(fd2);
        return 1;
    }
}