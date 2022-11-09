#include <stdio.h>
#include <stdlib.h>
#include <sys/sysinfo.h>

int main(void)
{
    struct sysinfo sys_info;
    int ret;

    ret = sysinfo(&sys_info);//可用于获取一些系统统计信息
    if (-1 == ret) 
    {
        perror("sysinfo error");
        return -1;
    }

    printf("uptime: %ld\n", sys_info.uptime);
    printf("totalram: %lu\n", sys_info.totalram);
    printf("freeram: %lu\n", sys_info.freeram);
    printf("procs: %u\n", sys_info.procs);

    return 0;
}