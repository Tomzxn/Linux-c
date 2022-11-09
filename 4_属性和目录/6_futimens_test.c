#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>


int main(void) 
{
    int ret;

    struct timespec tmsp_arr[2];

    int fd = open("./test.txt", O_RDWR);
    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    #if 0
        ret = futimens(fd, NULL);//同时设置为当前时间
    #endif

    #if 0
        tmsp_arr[0].tv_nsec = UTIME_OMIT;//访问时间不变
        tmsp_arr[1].tv_nsec = UTIME_NOW;//内容修改时间设置为当前时间
        ret = futimens(fd, tmsp_arr);
    #endif

    #if 1
        tmsp_arr[0].tv_nsec = UTIME_NOW;//访问时间设置为当前时间
        tmsp_arr[1].tv_nsec = UTIME_OMIT;//内容修改时间不变
        ret = futimens(fd, tmsp_arr);
    #endif

    if(-1 == ret)
    {
        perror("futimens error" );
        return 1;
    }

    close(fd);

    return 0;
}