#include <stdio.h>
#define SIZE 10

void inputArray(int *arr_1, int *arr_2);

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 5 - Exercise 2 \n\n");
	
	int arr1[SIZE];
	int arr2[SIZE];
	int i, temp;

	inputArray(arr1, arr2);
	
	printf("\n Before Swap ; \n");
	printf(" Array 1     : ");
	for(i=0; i<SIZE; i++)
	{
	printf("   %d   ", arr1[i]);
	}

	printf("\n Array 2     : ");
	for(i=0; i<SIZE; i++)
	{
	printf("   %d   ", arr2[i]);
	}

	for(i=0; i<SIZE; i++)
	{
		temp = *(arr1+i);
		*(arr1+i) = *(arr2+i);
		*(arr2+i) = temp;		
	}	
	
	printf("\n\n After Swap ; \n");
	printf(" Array 1     : ");
	for(i=0; i<SIZE; i++)
	{
		printf("   %d   ", arr1[i]);		
	}

	printf("\n Array 2     : ");
	for(i=0; i<SIZE; i++)
	{
		printf("   %d   ", arr2[i]);		
	}  

	return 0;
}

void inputArray(int *arr_1, int *arr_2)
{
	printf("\n User Input; \n");
	printf(" Array 1     : ");
	int i, j;
	for (i=0; i<SIZE; i++)
	{
		scanf("%d", &arr_1[i]);
	}
	
	printf(" Array 2     : ");
	for (j=0; j<SIZE; j++)
	{
		scanf("%d", &arr_2[j]);
	}
	
}
