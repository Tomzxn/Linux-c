#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //返回值小于 0 则str1 小于 str2
    //返回值大于 0 则str1 大于 str2
    //返回值等于 0 则str1 等gcc于 str2
    //可以选择比较多少位
    printf("%d\n", strcmp("ABC", "ABC",1));
    printf("%d\n", strcmp("ABC", "a",1));
    printf("%d\n", strcmp("a", "ABC",1));
    
    return 0;
}