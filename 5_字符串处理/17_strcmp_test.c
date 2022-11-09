#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //返回值小于 0 则str1 小于 str2
    //返回值大于 0 则str1 大于 str2
    //返回值等于 0 则str1 等gcc于 str2
    printf("%d\n", strcmp("ABC", "ABC"));
    printf("%d\n", strcmp("ABC", "a"));
    printf("%d\n", strcmp("a", "ABC"));
    
    return 0;
}