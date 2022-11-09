#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[50] = "app strlen test!";

    printf("String: \"%s\"\n", str);
    printf("Size: %ld\n", sizeof(str));//输出字符所占空间，【sizeof是关键字不是函数】

    return 0;
}