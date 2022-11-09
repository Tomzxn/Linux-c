#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd = open("./test.txt",O_WRONLY | O_APPEND);//会从文件末尾开始写入
    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    int ret = write(fd,"HELLO WORLD\n",12);
    if(-1 == ret)
    {
        perror("write error");
        close(fd);
        return 1;
    }
    close(fd);
    return 0;

}