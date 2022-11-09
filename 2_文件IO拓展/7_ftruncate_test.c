#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    truncate("./test.txt",4096);//直接基于文件进行截断操作
    return 0;
}