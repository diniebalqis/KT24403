#include <stdio.h>

int printWeather(int x);

int main ()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 3 - Exercise 1 \n\n");
	
	printf(" Lets check the weather ! \n");
	printf(" Keep entering the integer temperature, enter -1000 to quit \n");
	
	int temp;
	int h = 0, p = 0, c = 0;
	double sum = 0.0, avg;
	
	do
	{
		printf("\n Temperature: ");
		scanf("%d", &temp);
		printWeather(temp);
			
        if (temp == -1000)
        {
        	break;

		}
        else if(temp >= 85)
        {
        	h++;
		}
        else if(temp < 85 && temp >= 60)
        {
        	p++;
		}
        else if(temp < 60 && temp != -1000)
        {
        	c++;
		}
		sum += temp;
	}
	while (temp != -1000);	

	avg = sum / (h + p + c);
	
	printf("\n\n Total Hot days: %d ", h);
	printf("\n Total Pleasant days: %d ", p);		
	printf("\n Total Cold days: %d ", c);
	
	printf("\n Total Average for %d days is %.2f\n", (h+p+c), avg);  
		
	return 0;
}

int printWeather(int x)
{

	if(x >= 85)
	{
		printf(" Day: ");
		printf("h \n");
	}
	else if(x < 85 && x >= 60)
	{
		printf(" Day: ");
		printf("p \n");
	}
	else if(x < 60 && x != -1000)
	{
		printf(" Day: ");
		printf("c \n");
	}
	else if(x == -1000)
	{
		printf(" End");
	}
}
