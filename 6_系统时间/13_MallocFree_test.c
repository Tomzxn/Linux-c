#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC_SIZE 1024

int main(void)
{
    char *p = NULL;

    p = (char*)malloc(MALLOC_SIZE);//为指针p分配1024字节的空间
    if(NULL == p)
    {
        printf("malloc failure\n");
        return -1;
    }

    memset(p, 0, MALLOC_SIZE);//清0该空间内容

    free(p);//释放该指针空间

    return 0;
}