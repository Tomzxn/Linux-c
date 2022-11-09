#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ret = chown("./test.txt", 0, 0);//改变用户和用户组
    if(-1 ==  ret)
    {
        perror("chown error");
        return 1;
    }
    
    return 0;
}
