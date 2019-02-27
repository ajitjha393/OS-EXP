#include <stdio.h>
int main()
{
    int returnOfFork;
    returnOfFork = fork();
    if (returnOfFork < 0)
        printf("Process Creation Failed");
    else if (returnOfFork == 0)
        printf("New Child Processes Has been Created And is  Executing \n");
    if (returnOfFork > 0)
    {
        printf("New process Created \n");
        printf("CURRENT Process ID = %d\n", getpid());
        printf("PARENT OF CURRENT Process ID = %d\n", getppid());
    }
    return 0;
}