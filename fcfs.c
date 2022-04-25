//Calculating waiting time and turn around time for processes in FCFS 
#include<stdio.h>
int main()
{
	int bt[10],n,i,wt[10],tat[10],twt,ttat;
	printf("Enter the no of processes");
	scanf("%d",&n);
	printf("Enter Burst times for  processes");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i] = bt[i-1] + wt[i-1];
	}

	

	for(i=0;i<n;i++)
	{
		tat[i] = wt[i] + bt[i];
	}
	
	printf("process  Waiting Time Turn Around Time \n");
	for(i=0;i<n;i++)
	{
		printf(" %d \t %d    \t\t  %d\n", i+1,wt[i],tat[i]);
    }


	for(i=0;i<n;i++)
	{
		twt+=wt[i];
		ttat+=tat[i];
	}
	printf("Average Waiting Time = %f\t  Average Turn Around Time = %f",twt/(float)n,ttat/(float)n);
	return 0;
}
