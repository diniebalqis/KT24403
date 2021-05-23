//Nur Dinie Balqis Binti Abdul Yazid
//BI19110029
//Lab7-Exercise1

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

//global var
pthread_t tid[3];
int count=1;
pthread_mutex_t lock;

void* calculation (void* arg)
{
	pthread_mutex_lock(&lock); 
	
	//Addition process
	printf(" Addition, \n");
	int i;
	
	//condition when the counter is 1
    while(count==1)
    {
        count += 5; //add 5
    	for (i=0; i<2; i++)	//iterate 2 times of addition process (resulting 6, 7)
    	{
    		printf(" After adding , counter now = %d \n", count);
    		count++; //add 1 (iterate 2 times)
    	}
    	count ++; //resulting 9
    	printf(" After adding , counter now = %d \n", count); //completing for the third addition process
    }
   
	//Subtraction process
	printf("\n Subtraction, \n");
	
	//condition when the counter is 9 (continue from addtion process)
    while(count==9)
    {
        do
        {
            count-=2; //minus 2
            printf(" After subtract , counter now = %d \n", count); //first subtraction process(resulting 7)
        }       
            while(count != 7); //when output is 7
            count -= 4; //minus 4
            printf(" After subtract , counter now = %d \n", count); //second subtraction process(resulting 3)
    }

    //Multiplication process
    printf("\n Multiplication, \n");

	count = count*10; //multiply 10
	for (i=0; i<2; i++) //iterate 2 times of multiplication process (resulting 30, 150)
	{
		printf(" After multiply , counter now = %d \n", count);
		count = count*5; //multiply 5
	}
	
	pthread_mutex_lock(&lock);

	return 0;
}

int main(void)
{
	int i=0;
	int error;
	if(pthread_mutex_init(&lock, NULL)!=0)
	{
		printf("\n mutex init has failed\n");
		return 1;
	}
	
	while (i<3)
	{
		error=pthread_create(&(tid[i]), NULL, &calculation, NULL);
		if(error!=0)
		{
			printf("\n Thread can't be created : [%s]", strerror(error));
		}
		i++;
	}
		
	pthread_join(tid[0], NULL); //Addition process
	pthread_join(tid[1], NULL); //Subtraction process
	pthread_join(tid[2], NULL); //Multiplication process
	
	pthread_mutex_destroy(&lock);
	
	return 0;
}
