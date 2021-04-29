#include <stdio.h>

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 5 - Exercise 1 \n\n");
	
	char word[5] = "recar";
	
	char *p = word;
	char *q = word;
	
	printf(" Original word: \n");
	
	int i;
	for(i=0; i<5; i++)
	{
		printf(" %c ", word[i]);
		printf( "\t");
	}

	//backward the original word	
	while (*q!='\0')
	{
		q++;
	}
	q--;

	while (p<q)
	{
		char temp;
		temp = *p;
		  *p = *q;
		  *q = temp;
		p++;
		q--;
	}

	printf("\n\n Reversed word: \n");
		
	for(i=0; i<5; i++)
	{
		printf(" %c", word[i]);
		printf( "\t");
	}

	printf("\n\n Is the word is Palindrome? ");
	
	//compare original word & reversed word 
	p=word;
	while (*p!='\0')
	{
		p++;
	}
	p--;
	
	for (q = word; p >= q;) 
	{
		if (*p == *q) 
		{
			--p;
			q++;
		}
  		else
  		{
			break;
		}
 	}
 	
	//Output to confirm palindrome or not
	if (q > p)
	{
		printf("\n Yes");

	}
	else
	{
		printf("\n No");	
	}
	
	return 0;
}
