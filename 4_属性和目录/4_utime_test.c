#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <utime.h>

int main(void)
{
    int ret;
    struct utimbuf times = {0};
    time_t cur_sec;

    time(&cur_sec);//获取当前系统时间
    times.actime = cur_sec;
    times.modtime = cur_sec;


    ret = utime("./test.txt", &times);//修改时间属性
    if(-1 == ret)
    {
        perror("utime error");
        return 1;
    }

    return 0;
}