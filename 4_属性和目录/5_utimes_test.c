#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <utime.h>

#include <sys/time.h>

int main(void)
{
    int ret;
    struct timeval tmval_arr[2];
    time_t cur_sec;

    time(&cur_sec);//获取当前系统时间
    for(int i = 0; i < 2; i++)
    {
        tmval_arr[i].tv_sec = cur_sec;
        tmval_arr[i].tv_usec = 0;
    }


    ret = utimes("./test.txt", tmval_arr);//修改时间属性，精度比utime要高一些，微秒级精度
    if(-1 == ret)
    {
        perror("utimes error");
        return 1;
    }

    return 0;
}