#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){

    int fd,n;
    char buf;
    char myFileDirectory[100];
    
    printf("Enter the directory name : ");
    scanf("%s",myFileDirectory);
    fd = open(myFileDirectory,O_RDONLY);

    while((n=read(fd,&buf,1)) > 0)
        printf("%c",buf);
    return 0;
}