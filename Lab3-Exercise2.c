#include <stdio.h>
#include <stdlib.h>	//for srand() and rand() 
#include <time.h>

#define SIZE 50	//array size

void smallest_largest (int a[]);
void sort_array(int a[]);
void similarity_array(int a[],int b[]);

//global declaration
int i;

int main ()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 3 - Exercise 2 \n\n");
	
	//1st array
  	printf(" 1st generated array ");
  	printf("\n Output array items : ");

	//initialize 1st array
    int num[SIZE];
    int num2[SIZE];
    
	    
    for (i = 0; i < SIZE; i++)
	{
    	num[i] = (rand() % 999) + 1;
	}
       
    for(i = 0; i < SIZE; i++) 
	{
		//column set to 10 --> %10 == 0
        if(i % 10 == 0)
		{
        	printf("\n");
		}
        printf("%5d ", num[i]);
    }
    
    //call out smallest_largest
	smallest_largest (num);

    //call out sort_array
    sort_array (num);

	//2nd array
  	printf("\n\n 2nd generated array ");
  	printf("\n Output array items : ");

    for (i = 0; i < SIZE; i++)
	{
    	num2[i] = (rand() % 999) + 1;
	}
       
    for(i = 0; i < SIZE; i++) 
	{
		//column set to 10 --> %10 == 0
        if(i % 10 == 0)
		{
        	printf("\n");
		}
        printf("%5d ", num2[i]);
    }
    
    printf("\n");
    
    //call out sort_array
    similarity_array(num,num2);
    
    return 0;
}

void smallest_largest (int a[])
{
	//initialize smallest & largest
	int large, small, index;
	
	//smallest
	small = a[0];
	for (i = 1; i < SIZE; i++)
	{
		if (small > a[i])
		{
			small = a[i];
			index = i;
		}
	}
	printf("\n\n Smallest int : %d \t\tIndex : %d", small, index);

	//largest
	large = a[0];
	for (i = 1; i < SIZE; i++)
	{
		if (large < a[i])
		{
			large = a[i];
			index = i;
		}
	}
	printf("\n Largest int  : %d \t\tIndex : %d", large, index);
}

void sort_array(int a[])
{
	int i, j, temp = 0;
	
	for(i = 0; i < SIZE; ++i)
	{
		for(j = i+1; j < SIZE; ++j)
		{
			//swap
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n\n Sorted Output array items : ");
	for(i = 0; i < SIZE; i++) {
        if(i % 10 == 0){
        	printf("\n");
		}
		printf("%5d ", a[i]);
	}
}

void similarity_array(int a[],int b[])
{
	int i, j;
	double count = 0, percent;
		
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			if(a[i] == b[j]){
				printf("\n %d similar", a[i]);
				count++;
			}
		}
	}
	
	percent = count/50*100;
    printf("\n\n %.f numbers similar. %.1f %% similarity.", count, percent);
}
