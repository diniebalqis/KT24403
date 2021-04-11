#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 2 - Exercise 2 \n\n");
	
	printf(" State Predictor \n");
	printf(" States: new, ready, running, waiting, terminated \n");
	
	char state[10];
	printf("\n Current state: ");
	scanf("%s", &state);
	
	if (strcmp(state, "new") == 0){
		char x;
		printf(" Admit? (Enter y/n) ===> ");
		scanf("\n%c", &x);
		
		if(x == 'y'){
			printf(" Next state : ready ");
		}else{
			exit(0);
		}
		
	}else if (strcmp(state, "ready") == 0){
		printf(" Next state : running ");
	}
	
	else if  (strcmp(state, "running") == 0){
		int z;
		printf(" Press '1' for interrupt, '2' for I/O wait, '3' to exit : ");
		scanf("\n%d", &z);
		
		if(z == 1){
			printf(" Next state : ready ");
		}else if (z == 2){
			printf(" Next state : waiting ");
		}else if (z == 3){
			printf(" Next state : terminated ");
		}else{
			exit(0);
		}   
	
	}else if (strcmp(state, "waiting") == 0){
		char x;
		printf(" I/O Completed? (Enter y/n) ===> ");
		scanf("\n%c", &x);
		
		if(x == 'y'){
			printf(" Next state : ready ");
		}else{
			exit(0);
		}
	}else{
		printf(" System terminated...");
	}
	
	return 0;
}
