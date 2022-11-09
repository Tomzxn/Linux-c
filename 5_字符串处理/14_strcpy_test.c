#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[100] = {0};
    char str2[] = "Hello World!";
    char str3[100] = {0};

    strcpy(str1, str2);//复制字符串
    puts(str1);
    
    strncpy(str3, str2, 5);//复制字符串，只复制5位
    puts(str3);

    return 0;
}