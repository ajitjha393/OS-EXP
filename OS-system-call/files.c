#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
int main()
{

    int sz;

    char *c = (char *)calloc(100, sizeof(char));
    //OPENING
    int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        printf("File CREATION UNSUCCESSFUL");
    }
    else
    {
        printf("File CREATED SUCCESSFULLY :) \n ");
    }

    //WRITE
    sz = write(fd, "Hello FRIENDS", strlen("Hello FRIENDS"));

    //Close
    close(fd);

    //open

    fd = open("foo.txt", O_RDONLY);

    //read

    sz = read(fd, c, 13);
    c[sz] = '\0';
    printf("Those bytes are as follows: % s\n", c);

    return 0;
}