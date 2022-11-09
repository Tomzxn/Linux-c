#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp = NULL;

    fp = fopen("./test_file", "r");
    if (NULL == fp) 
    {
        perror("fopen error");
        exit(-1);
    }

    ch = fgetc(fp);//从文件中输入字符，也可以是标准输入stdin
    printf("%c\n", ch);

    fclose(fp);

    return 0;
}
