#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//error在程序发生错误时，会修改errno的值，根据errno的值可以知道错误原因
int main(void)
{
    printf("errno = %d\n",errno);

    int fd = open("./test.txt",O_RDONLY);
    if(-1 == fd){
        printf("errno = %d\n",errno);
        printf("error: %s\n",strerror(errno));//strerror函数可以将错误信息返回
        perror("");//perror函数可以将错误信息打印
        perror("open error");
        return 1;
    }

    return 0;
}