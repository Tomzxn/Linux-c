#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    //lseek(int fd, off_t offset, int whence);
}

/*
将读写位置移动到文件开头处：
off_t off = lseek(fd, 0, SEEK_SET);
if (-1 == off)
{
    return -1;
}
    
将读写位置移动到文件末尾：
off_t off = lseek(fd, 0, SEEK_END);
if (-1 == off)
{
    return -1;
}

将读写位置移动到偏移文件开头 100 个字节处：
off_t off = lseek(fd, 100, SEEK_SET);
if (-1 == off)
{
    return -1;
}

获取当前读写位置偏移量：
off_t off = lseek(fd, 0, SEEK_CUR);
if (-1 == off)
{
    return -1;
}

*/
