#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(){ 
 
 
 int sz;
 int fd1,fd2;
     char myFileDirectory[100];
     char *c = (char *) calloc(100, sizeof(char));  
    printf("Enter the directory name : ");
    scanf("%s",myFileDirectory);
    fd1 = open(myFileDirectory,O_RDONLY);

     sz = read(fd1, c, 100); 
    c[sz] = '\0'; 



   
    //OPENING
      fd2 = open("Move.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
         
     sz = write(fd2,c,strlen(c)); 
    printf("%d",sz);

    
     remove(myFileDirectory);

}
