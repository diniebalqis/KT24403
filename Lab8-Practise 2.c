#include <stdio.h>
#include <stdbool.h>

void roundRobin(int processes[4],int bt[4], int wt[4], int tat[4], int quantum);
void findavgTime(int processes[4], int bt[4], int quantum);

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 8 - Exercise 2 \n\n");

    // Process id's
    int id[4] = { 1, 2, 3, 4};
    
    // Burst time of all processes
    int burst_time[4] = {6, 8, 7, 3};
    
    // Time quantum
    int quantum = 3;
    
    findavgTime(id, burst_time, quantum);
    
	return 0;
}

// RoundRobin algorithm
void roundRobin(int id[4],int bt[4], int wt[4], int tat[4], int quantum) 
{
    int rem_bt[4]; // Remaining burst time
	int i;
    
    // For loop for waiting time
    for (i = 0 ; i < 4; i++)
    {
    	rem_bt[i] = bt[i];	
	}

    int ct = 0; // Current time
    
    while (1) {
    	
       bool done = true;
       
       for (i = 0 ; i < 4; i++) 
	   {
	   	
          if (rem_bt[i] > 0) 
		  {
             done = false; // There is a pending process
             
             if (rem_bt[i] > quantum) 
			 {
                // Increase the value of ct ; how much time a process has been processed
                ct += quantum;
                // Decrease the burst_time of current process by quantum
                rem_bt[i] -= quantum;
             }
             
             // If burst time is smaller than or equal to quantum  (end of process)
             else 
			 {
                // Increase the value of ct ; how much time a process has been processed
                ct = ct + rem_bt[i];
                // Waiting time is current time minus time used by this process
                wt[i] = ct - bt[i];
                // As the process gets fully executed make its remaining burst time = 0
                rem_bt[i] = 0;
             }
          }
       }
       // If all processes are done
       if (done == true)
          break;
    }
    
    // For loop for turnaround time
    for (i = 0; i <4; i++)
   	{
   		tat[i] = bt[i] + wt[i];
	}
}

// Function to calculate average time
void findavgTime(int id[4], int bt[4], int quantum) 
{
    int wt[4], tat[4], total_wt = 0, total_tat = 0, i;
    
    // Function to find waiting time & turnaround time of all processes
    roundRobin(id, bt, wt, tat, quantum);
    
    // Display processes along with all details
    printf(" Processes\t\tBurst Time\t\tWaiting Time\t\tTurnaround Time\n");
    
    // Calculate total waiting time and total turnaround time
    for (i=0; i<4; i++) 
    {
       total_wt = total_wt + wt[i];
       total_tat = total_tat + tat[i];
       printf(" P[%d]\t\t\t%d\t\t\t%d\t\t\t%d\n",i+1, bt[i], wt[i], tat[i]);
    }
    printf("\n Average Waiting Time    = %.2f", (double)total_wt / 4);
    printf("\n Average Turnaround Time = %.2f\n", (double)total_tat / 4);
}
