#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int ret;

    ret = rmdir("./new_dir");//删除目录，只能删除空目录
    if(-1 == ret)
    {
        perror("rmdir error");
        return 1;
    }

    return 0;
}
