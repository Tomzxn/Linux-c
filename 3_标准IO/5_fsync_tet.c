#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static char buf[4096];

int main(void)
{
    int fd;
    fd = open("./test.txt", O_WRONLY | O_CREAT | O_EXCL, 0666);

    for(int i = 0; i<4096; i++)
    {
        write(fd,buf,sizeof(buf));
    }

    //fsync(fd);//将缓冲区内容强制写入磁盘设备，拖慢程序运行
    //fdatasync(fd);//将缓冲区内容强制写入磁盘设备，拖慢程序运行,不同之处在于 fdatasync()仅将参数 fd 所指文件的内容数据写入磁盘，并不包括文件的元数据
    sync();//将缓冲区内容强制写入磁盘设备,同步数据
    close(fd);

    return 0;
}