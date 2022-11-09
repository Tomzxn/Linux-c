#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    struct tm local_t;
    time_t sec;

    sec = time(NULL);
    if (-1 == sec) 
    {
        perror("time error");
        return -1;
    }

    printf("获取得到的秒数: %ld\n", sec);
    
    localtime_r(&sec, &local_t);//可以将使用 struct tm 结构体表示的分解时间转换为 time_t时间
    printf("转换得到的秒数: %ld\n", mktime(&local_t));
    
    return 0;
}