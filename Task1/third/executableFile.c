#include <stdio.h>
#include <unistd.h>
int main() {
    int childPID = getpid();
    printf("Child PID: %d\n", childPID);
    return 0;
    }