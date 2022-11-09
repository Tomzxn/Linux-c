#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) 
{
    int ret;
    ret = unlink("./test.txt");//删除文件硬链接（删除文件）
    if(-1 == ret)
    {
        perror("unlink error");
        return 1;
    }

    return 0;
}