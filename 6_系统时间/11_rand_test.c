#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random_num[8];
    int count;

    srand(time(NULL));//为 rand()设置随机数种子

    for(count =0; count < 8; count++)
    {
        random_num[count] = rand() % 100;//生成随机数并提取两位有效数字
    }

    printf("[");
    for(count =0; count < 8; count++)
    {
        printf("%d",random_num[count]);
        if(count != 7)
        {
            printf(",");
        }
    }

    printf("]\n");
    return 0;
}