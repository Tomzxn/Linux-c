#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int ret;
    char buf[128] = {0};

    ret = readlink("./sym_file", buf, 128);//读取软链接，ret是读取到的字节数，buf是软链接的源文件
    if (-1 == ret) 
    {
        perror("readlink");
        return 1;
    }

    printf("readlink: %d\n", ret);
    printf("%s\n", buf);

    return 0;
}

