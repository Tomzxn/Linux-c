#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[100];

    memset(str, 0x0, sizeof(str));//以0填充该指针空间，填充数为sizeof（str）
    
    return 0;
}