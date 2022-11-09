#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int ret;

    ret = link("./test.txt", "hard_test");//创建硬连接
    if (ret == -1) {
        perror("link error");
        return 1;
    }

    ret = symlink("./test.txt", "./sym_file");//创建软连接
    if (ret == -1) {
        perror("symlink error");
        return 1;
    }

    return 0;
}