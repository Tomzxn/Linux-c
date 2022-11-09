#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd;
    int ret;
    char buf[125] = {0};

    fd = open("./test.txt",O_RDONLY);
    if(-1 == fd)
    {
        printf("open error\n");
        return 1;
    }

    printf("open OK\n");

    ret = read(fd, buf, 11);//读取打开的文件的内容
    if(-1 == ret)
    {
        printf("read error\n");
        close(fd);
        return 1;
    }

    printf("read %d bytes: %s\n",ret,buf);

    close(fd);
    return 0;


}