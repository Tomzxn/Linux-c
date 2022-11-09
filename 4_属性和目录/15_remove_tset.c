#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) 
{
    int ret;
    ret = remove("./hard_test");//删除文件或一个空的文件目录
    if(-1 == ret)
    {
        perror("remove error");
        return 1;
    }

    return 0;
}