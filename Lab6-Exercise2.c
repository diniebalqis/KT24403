//Nur Dinie Balqis Binti Abdul Yazid
//BI19110029
//Lab6-Practise2

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    
    fork();
    fork();
    fork();
    fork();
    wait(NULL);
    
    printf("\nMy ID: %d \n", getpid());
    printf("My Parent: %d \n", getppid());
    
    exit(0);
    
}
