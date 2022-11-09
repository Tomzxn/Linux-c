#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char tm_str[100] = {0};
    time_t tm;

    tm = time(NULL);//获取当前时间
    if(-1 == tm)
    {
        perror("time error");
        return -1;
    }

    ctime_r(&tm,tm_str);//将当前时间转换为人们直观可读的模式

    printf("%s",tm_str);

    return 0;
}