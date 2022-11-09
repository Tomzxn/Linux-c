#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void)
{
    int ret;

    ret = mkdir("./new_dir", 0666);//新建目录
    if(-1 == ret)
    {
        perror("mkdir error");
        return 1;
    }

    return 0;
}