#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[100] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);//拼接字符串前为目标，后为源
    puts(str1);
    
    return 0;
}