#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct stat st;
    int ret;
    
    int fd = open("./test.txt",O_RDWR);
    if(-1 == fd)
    {
        perror("open error");
        return 1;
    }

    ret = fstat(fd, &st);//获取文件信息
    if(-1 == ret)
    {
        perror("stat error");
        close(fd);
        return 1;
    }

    printf("inode: %ld\n",st.st_ino);
    printf("size: %ld\n",st.st_size);
    printf("mode: %d\n",st.st_mode);
    printf("type:");

    if(S_ISREG(st.st_mode))
        printf("普通文件");
    else if(S_ISDIR(st.st_mode))
        printf("目录");
    else if(S_ISCHR(st.st_mode))
        printf("字符设备");
    else if(S_ISBLK(st.st_mode))
        printf("块设备");
    else if(S_ISFIFO(st.st_mode))
        printf("管道文件");
    else if(S_ISLNK(st.st_mode))
        printf("链接");
    else if(S_ISSOCK(st.st_mode))
        printf("套接字");

    printf("\n");

    return 0;
}
