#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


static unsigned char buf[4096] = {0};

int main(void)
{
    int fd = open("./test.txt", O_WRONLY | O_CREAT | O_EXCL, 0644);
    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    int ret = lseek(fd, 4096, SEEK_SET);
    if(-1 == ret)
    {
        perror("lseek error");
        close(fd);
        return 1;
    }

    ret = write(fd, buf, 4096);
    if(-1 == ret)
    {
        perror("write error");
        close(fd);
        return 1;
    }

    printf("write %d bytes\n",ret);

    close(fd);
    return 0;
}



//ls查看逻辑大小为8k，du查看实际占用存储块的大小为4k。4k的空洞部分