#include <stdio.h>
#include <unistd.h>
int main(int argc, int *argv[]) {
    int parentPID = getppid();
    printf("Parent PID: %d\n", parentPID);
    execv(".executableFile", argv);
    return 0;
}