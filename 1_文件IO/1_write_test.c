#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd1;
    int ret;

    fd1 = open("./test.txt",O_WRONLY | O_CREAT | O_EXCL,0644);//根据关键字打开或创建并打开一个文件
    if(-1 == fd1)
    {
        printf("open error\n");
        return 1;
    }

    printf("open OK\n");

    ret = write(fd1, "Hello world",11);//向打开的文件内写入
     if(-1 == ret)
    {
        printf("write error\n");
        close(fd1);
        return 1;
    }

    printf("write %d bytes OK\n",ret);

    close(fd1);//关闭这个文件

    return 0;
}

