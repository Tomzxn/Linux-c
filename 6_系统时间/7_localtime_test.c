#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    struct tm t;
    time_t sec;

    sec = time(NULL);
    if (-1 == sec) {
        perror("time error");
        return -1;
    }

    localtime_r(&sec, &t);//可以把 time()或 gettimeofday()得到的秒数（time_t 时间或日历时间）变成一个 struct tm结构体所表示的时间

    printf("当前时间: %d 年%d 月%d 日 %d:%d:%d\n",
            t.tm_year + 1900, t.tm_mon, t.tm_mday,
            t.tm_hour, t.tm_min, t.tm_sec);
    return 0;
}