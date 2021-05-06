//Nur Dinie Balqis Binti Abdul Yazid
//BI19110029
//Lab6-Practise2

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    
    fork(); //1 time
    fork(); //2 times
    fork(); //3 times
    fork(); //4 times
    wait(NULL);
    
    printf("\nMy ID: %d \n", getpid());
    printf("My Parent: %d \n", getppid());
    
    exit(0);
    
}
