#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <errno.h>

int main(void)
{
    DIR *dir = NULL;
    struct dirent *rent;
    int ret;

    dir = opendir("./");
    if (dir == NULL) 
    {
        perror("opendir error");
        return 1;
    }

    while ((rent = readdir(dir))!= NULL)
    {
        printf("%s: %ld\n", rent->d_name, rent->d_ino);
    }

    if (rent == NULL)
    {
        if(0 != errno)
        {
            perror("readdir error");
        }
        else
        {
            printf("end-of-dir\n");
        }
    }

    closedir(dir);
    return 0;
}