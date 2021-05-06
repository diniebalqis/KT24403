//Nur Dinie Balqis Binti Abdul Yazid
//BI19110029
//Lab6-Exercise1

#include<stdio.h>
#include<unistd.h>

int main() {
    
    int a[15] = { 23, 4, 8, 33, 25, 7, 12, 6, 49, 50, 11, 20, 21, 24, 35 };
    int n = fork();
    int i, Odd, Even;

   // Checking if n is not 0
    if (n > 0) {
        printf ("I'm the parent, I'll be printing the odd numbers: \n");
        // To print array
        for (i = 0; i < 15; i++) {
            // To check Odd numbers
            if (a[i] % 2 != 0) {    
                Odd = a[i];
                printf ("%d     ", Odd);
            }
        }
    }
  
    // If n is 0 i.e. we are in child process
    else {
        printf ("\n\n\nI'm the child, I'll be printing the even numbers: \n");
        // To print array
        for (i = 0; i < 15; i++) {
            // To check Even numbers
            if (a[i] % 2 == 0) {
                Even = a[i];
                printf ("%d     ", Even);
            }
        }
    }
    return 0;
}
