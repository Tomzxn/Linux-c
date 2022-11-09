#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <sys/time.h>

int main(void)
{
    struct timeval tmval_arr[2];
    time_t cur_sec;
    int i; 

    time(&cur_sec);
    for (i = 0; i < 2; i++) 
    {
        tmval_arr[i].tv_sec = cur_sec;
        tmval_arr[i].tv_usec = 0;
    }

    settimeofday(tmval_arr, NULL);//设置时间
    return 0;
}