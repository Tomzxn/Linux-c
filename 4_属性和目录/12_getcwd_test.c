#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    char buf[128] ={0};

    getcwd(buf, sizeof(buf));//获取当前程序的工作目录
    printf("%s\n",buf);

    return 0;
}