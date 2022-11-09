#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = {0};
    FILE *fp = NULL;

    fp = fopen("./test_file", "r");
    if (NULL == fp) 
    {
        perror("fopen error");
        exit(-1);
    }

    fgets(str, sizeof(str), fp);//从文件中输入字符串，也可以是标准输入stdin
    printf("%s", str);

    fclose(fp);

    return 0;
}
