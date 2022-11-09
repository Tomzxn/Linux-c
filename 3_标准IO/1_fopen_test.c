#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buf[] = "Hello World!\n";
    FILE *fp = NULL;
    /* 打开文件 */
    if (NULL == (fp = fopen("./test_file", "w"))) //WRONLY
    {
        perror("fopen error");
        exit(-1);
    }

 printf("文件打开成功!\n");
}