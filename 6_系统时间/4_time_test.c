#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    time_t t;
    t = time(NULL);//获取当前时间距离1970、1、1的秒，精确到秒
    
    if (-1 == t) 
    {
        perror("time error");
        return -1;
    }

    printf("时间值: %ld\n", t);
    return 0;
}