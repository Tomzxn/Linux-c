#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *ptr = NULL;
    char str[] = "Hello World!";

    ptr = strstr(str, "World");//以查找到字符串当中的某一个字符串位置
    if (NULL != ptr) 
    {
        printf("String: %s\n", ptr);
        printf("Offset: %ld\n", ptr - str);
    }
    
    return 0;
}