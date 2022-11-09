#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int  main(void)
{
    int ret;

    ret = rename("sym_file", "new_sym_file");
    if(-1 == ret)
    {
        perror("rename error");
        return -1;
    }

    return 0;
}