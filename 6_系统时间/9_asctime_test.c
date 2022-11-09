#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    struct tm local_t;
    char tm_str[100] = {0};
    time_t sec;

    sec = time(NULL);
    if (-1 == sec) {
        perror("time error");
        return -1;
    }

    localtime_r(&sec, &local_t);

    asctime_r(&local_t, tm_str);//将 struct tm 表示的分解时间转换为固定格式的字符串

    printf("本地时间: %s", tm_str);
    
    return 0;
}