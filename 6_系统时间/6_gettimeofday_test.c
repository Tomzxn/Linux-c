#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void)
{
    struct timeval tval;
    int ret;

    ret = gettimeofday(&tval, NULL);//获取当前时间，精确到微妙
    if (-1 == ret) 
    {
        perror("gettimeofday error");
        return -1;
    }

    printf("时间值: %ld 秒+%ld 微秒\n", tval.tv_sec, tval.tv_usec);
    return 0;
}