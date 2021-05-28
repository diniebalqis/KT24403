#include <stdio.h>

//priority scheduling algorithm
void PriorityScheduling(int processes[4], int burst_time[4], int priority[4], int waiting_time[4], int turnaround_time[4])
{
	int i, j, pos, temp; 
	
	//sorting burst time, priority & process in ascending order using selection sort
	for(i=0; i<4; i++)
	{
		pos = i;  //position
		for(j=i+1; j<4; j++)
		{
			if(priority[j] < priority[pos])
			{
				pos = j;
			}
		}
		
		temp = priority[i];
		priority[i] = priority[pos];
		priority[pos] = temp;
		
		temp = burst_time[i];
		burst_time[i] = burst_time[pos];
		burst_time[pos] = temp;
		
		temp = processes[i];
		processes[i] = processes[pos];
		processes[pos] = temp;
	}
	
	waiting_time[0] = 0;
	
	//calculating waiting time
	for(i=1; i<4; i++)
	{
		waiting_time[i] = burst_time[i-1] + waiting_time[i-1];
	}
	
	//calculating turnaround time
	for(i=0; i<4; i++)
	{
		turnaround_time[i] = burst_time[i] + waiting_time[i];
	}	
}
	
void calcAvg(int processes[4], int burst_time[4], int priority[4])
{
	int waiting_time[4], turnaround_time[4], i, avgWait = 0, avgTurn = 0;
	
	PriorityScheduling(processes, burst_time, priority, waiting_time, turnaround_time);
	
	printf("\n Process\t\tBurst Time\t\tPriority\t\tWaiting Time\t\tTurnaround Time");
	for(i=0; i<4; i++)
	{
		avgWait = avgWait + waiting_time[i];
		avgTurn = avgTurn + turnaround_time[i];
		
		printf("\n P[%d]\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d", (i+1), burst_time[i], priority[i], waiting_time[i], turnaround_time[i]);
	}
	
	printf("\n\n Average Waiting Time: %.2f", (double)avgWait/4);
	printf("\n Average Turnaround Time: %.2f", (double)avgTurn/4);
}

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Additional: using Priority \n\n");
	
	//Process id's
	int processes[] = {1,2,3,4};
	
	//Burst time of all processes 
	int burst_time[] = {6,8,7,3};
	
	//Priority of all processes 
	int priority[] = {3,1,2,4};
	
	calcAvg(processes, burst_time, priority);
	
	return 0;
}
