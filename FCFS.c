#include<stdio.h>

// Function to calculate waiting time
void findWaitingTime(int processes[], int bt[], int wt[])
{
    // waiting time for first process is 0
    wt[0] = 0;
   
    int i;
    // calculating waiting time
    for (i = 1; i < 4 ; i++ )
    {
    	wt[i] =  bt[i-1] + wt[i-1];	
	}
}
   
// Function to calculate turn around time
void findTurnAroundTime( int processes[], int bt[], int wt[], int tat[])
{
	int i;
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (i = 0; i < 4 ; i++)
    {
    	tat[i] = bt[i] + wt[i];	
	}
}
   
//Function to calculate average time
void findavgTime( int processes[], int bt[])
{
    int wt[4], tat[4], total_wt = 0, total_tat = 0;
   
    //Function to find waiting time of all processes
    findWaitingTime(processes, bt, wt);
   
    //Function to find turn around time for all processes
    findTurnAroundTime(processes, bt, wt, tat);
   
    //Display processes along with all details
    printf(" Processes\tBurst time\tWaiting time\tTurn around time\n");
   
    int i;
    // Calculate total waiting time and total turn around time
    for (i=0; i<4; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("   P[%d] ",(i+1));
        printf("   \t%d ", bt[i] );
        printf("   \t\t%d",wt[i] );
        printf("   \t\t%d\n",tat[i] );
    }
    
    double s=(double)total_wt / 4;
    double t=(double)total_tat / 4;
    printf("\n Average waiting time = %.2f",s);
    printf("\n Average turn around time = %.2f",t);
}
   
int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Additional: using FCFS \n\n");
	
    //process id's
    int processes[] = { 1, 2, 3, 4};
   
    //Burst time of all processes
    int  burst_time[] = {6, 8, 7, 3};
   
    findavgTime(processes,  burst_time);
    return 0;
}
