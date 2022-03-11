#include <stdio.h>
#include <unistd.h>
int main() {
    int parentPID = getppid();
    int childPID = getpid();
    printf("PID of a parent process: %d\n", parentPID);
    printf("PID of a child process: %d\n", childPID);
    return 0;
}