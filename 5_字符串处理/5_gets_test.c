#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = {0};
    char *ptr = NULL;

    ptr = gets(str);//用于从标准输入设备（譬如键盘）中获取用户输入的字符串
    if (NULL == ptr)
    {
        return -1;
    }

    puts(str);
    return 0;
}