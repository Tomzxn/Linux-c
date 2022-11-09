#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;

    ch = getchar();//一次接受一个字符，后面的会被截断
    printf("ch: %c\n", ch);

    return 0;
}