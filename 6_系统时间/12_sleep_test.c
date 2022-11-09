#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void)
{
    puts("Sleep Start");

    sleep(3);//延迟3秒

    puts("Sleep End");

    puts("Usleep Start");

    usleep(3*1000*1000);//微妙级延时，延迟3秒

    puts("Usleep End");

    struct timespec request_t;

    puts("Nanosleep Start!");
 
    request_t.tv_sec = 3;
    request_t.tv_nsec = 0;
    nanosleep(&request_t, NULL);//纳秒极延时，需要创建结构体变量

    puts("Nanosleep End!");



    return 0;
}