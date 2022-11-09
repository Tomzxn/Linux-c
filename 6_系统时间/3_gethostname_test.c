#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    char hostname[20];
    int ret;

    memset(hostname, 0x0, sizeof(hostname));

    ret = gethostname(hostname, sizeof(hostname));//获取 Linux 系统主机名
    if (-1 == ret) 
    {
        perror("gethostname error");
        return -1;
    }

    puts(hostname);
    return 0;
}