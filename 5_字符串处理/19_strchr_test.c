#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *ptr = NULL;
    char str[] = "Hello World!";

    ptr = strchr(str, 'W');//以查找到字符串当中的某一个字符位置
    if (NULL != ptr) 
    {
        printf("Character: %c\n", *ptr);
        printf("Offset: %ld\n", ptr - str);
    }

    ptr = strrchr(str, 'o');//与上面功能一样，不过是从右往左
    if (NULL != ptr) 
    {
        printf("Character: %c\n", *ptr);
        printf("Offset: %ld\n", ptr - str);
    }

    return 0;
}