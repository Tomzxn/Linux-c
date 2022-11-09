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

    fputc('A', fp);//可把字符输出到指定的文件中，可以是设备也可以是文件
    fputc('B', fp);
    fputc('C', fp);
    fputc('D', fp);
    fputc('\n', fp);

    fputc('O', stdout);
    fputc('K', stdout);
    fputc('!', stdout);
    fputc('\n', stdout);

    fclose(fp);

    return 0;
}