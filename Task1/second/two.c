#include <stdio.h>
#include <unistd.h>
int main() {
    int parentPID = getppid();
    int childPID = getpid();
    if (fork() == 0) 
    {
        printf("PID of a child process: %d\n", childPID);
    }
    else
    {
        printf("PID of a parent process: %d\n", parentPID);
    }
    return 0;
}