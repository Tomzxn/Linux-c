#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[50] = "Linux app puts test";

    puts("Hello World!");//打印信息，会自动在结尾加上“\n”
    puts(str);

    return 0;
}