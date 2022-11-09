#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd = open("./test.txt",O_RDONLY | O_TRUNC);//每次打开文件将文件清空

    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    close(fd);
}