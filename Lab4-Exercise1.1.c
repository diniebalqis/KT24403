#include <stdio.h>

void printArray(int v[5][4]);
void announceWinner(double vp[4], double cv[4]);

int main()
{

	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 4 - Exercise 1 \n\n");
	
	//declaring array data
	int votes[5][4]={192,48,206,37,
                 	 147,90,312,21,
                     186,12,121,38,
                     114,21,408,39,
                     267,13,382,29};
    
    //call out printArray funct.
	printArray(votes);
	                
    int ttl = 0;
    int row, col; 
	double candidate_A, candidate_B, candidate_C, candidate_D; 
    for (row=0; row<5; row++) 
	{
        for (col=0; col<4; col++) 
		{
			ttl += votes[row][col];
			
			if(col==0)
			{
				candidate_A += votes[row][col];
			}
			else if(col==1)
			{
				candidate_B += votes[row][col];
			}
			else if(col==2)
			{
				candidate_C += votes[row][col];
			}
			else if(col==3)
			{
				candidate_D += votes[row][col];
			}
        }
    }

	//declaring array data for candidateVotes
    double candidateVotes[4] = {candidate_A, candidate_B, candidate_C, candidate_D};
    double percent_A = (candidate_A/ttl)*100;
    double percent_B = (candidate_B/ttl)*100;
    double percent_C = (candidate_C/ttl)*100;
    double percent_D = (candidate_D/ttl)*100;
    //declaring array data for candidateVotesPercent
    double candidateVotesPercent[4] = {percent_A, percent_B, percent_C, percent_D};  
  
    printf("\n Total votes         %d", ttl);
	printf("\n\n----------------------------------------------------------------------\n");	
	printf(" Candidate votes      %.f          %.f          %.f          %.f", candidate_A, candidate_B, candidate_C, candidate_D);    
	printf("\n----------------------------------------------------------------------\n");
	printf(" Candidate votes%%    %.2f         %.2f         %.2f         %.2f", percent_A, percent_B, percent_C, percent_D);    
	printf("\n----------------------------------------------------------------------\n\n");	
    
	announceWinner(candidateVotesPercent, candidateVotes);
     
	return 0;
	
}

void printArray(int v[5][4])
{

	printf("----------------------------------------------------------------------\n");	
	printf("                 Candidate A   Candidate B  Candidate C   Candidate D");
	printf("\n----------------------------------------------------------------------\n");
	
	int row, col;
	
	for(row=0; row<5; row++)
	{
		//to print the faculty part
		if (row==0)
		{
			printf("      Faculty 1   ");
		}
		else if (row==1)
		{
			printf("      Faculty 2   ");
		}
		else if (row==2)
		{
			printf("      Faculty 3   ");
		}
		else if (row==3)
		{
			printf("      Faculty 4   ");
		}
		else if (row==4)
		{
			printf("      Faculty 5   ");
		}

        for(col=0;col<4;col++)
        {
            printf("    %d       ",v[row][col]);
        }
        printf("\n----------------------------------------------------------------------\n");
    }
	
}

void announceWinner(double vp[4],double cv[4])
{ 
	if(vp[0]>=50)
	{
		printf(" Candidate A wins!");
	}
	else if(vp[1]>=50)
	{
		printf(" Candidate B wins!");
	}
	else if(vp[2]>=50)
	{
		printf(" Candidate C wins!");
	}
	else if(vp[3]>=50)
	{
		printf(" Candidate D wins!");
	}
	
	int i, max1, max2;

		if(!(vp[0]>=50) && !(vp[1]>=50) && !(vp[2]>=50) && !(vp[3]>=50))
		{
			printf(" No candidates got more than 50%% votes \n");
			printf(" There are 2 candidates with high votes \n");
			
			for(i=0; i<4; i++)
    		{
        		if(cv[i] > max1)
        		{
		            /*
		             * If current element of the array is first largest
		             * then make current max as second max
		             * and then max as current array element
		             */
		            max2 = max1;
		            max1 = cv[i];
	        	}
		        else if(cv[i] > max2 && cv[i] < max1)
		        {
		            /*
		             * If current array element is less than first largest
		             * but is greater than second largest then make it
		             * second largest
		             */
		            max2 = cv[i];
		        }
    		}
    		
			printf("\n Two highest vote :");
			if (max1==cv[0])
			{
				printf(" Candidate A");	
			}
			else if (max1==cv[1])
			{
				printf(" Candidate B");	
			}
			else if (max1==cv[2])
			{
				printf(" Candidate C");	
			}
			else if (max1==cv[3])
			{
				printf(" Candidate D");	
			}
			printf(" and");
			if (max2==cv[0])
			{
				printf(" Candidate A");	
			}
			else if (max2==cv[1])
			{
				printf(" Candidate B");	
			}
			else if (max2==cv[2])
			{
				printf(" Candidate C");	
			}
			else if (max2==cv[3])
			{
				printf(" Candidate D");	
			}
			
		}
}

/* another way
int totalCandidateVotes(int v[5][4])
{
    int row, col;
	int ttl = 0; 
	
    for (row=0; row<5; row++) 
	{
        for (col=0; col<4; col++) 
		{
            ttl += v[row][col];
        }
    }
    printf("\n Total votes     : %d", ttl);
    
    return ttl;
}

int candidateVotes(int v[5][4])
{
    int row, col;
	int sum = 0; 
	
    for (row=0; row<4; row++) 
	{
        for (col=0; col<5; col++) 
		{
			sum += v[col][row];
        }
        printf("    %d      ", sum);
        sum=0;
    }
    
    return sum;
}
*/



