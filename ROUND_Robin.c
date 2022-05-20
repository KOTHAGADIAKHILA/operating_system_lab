//ROUND ROBIN
#include<stdio.h>
int main()
{
	int bt[100],n,wt[100],tat[100],i,ttat,twt,s=0,c=0,temp[100],qt,tempval;
	printf("Enter no of processes");
	scanf("%d",&n);
	printf("Enter burst time of each process");
	for(i=0;i<n;i++)
	{
	scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
    	temp[i] = bt[i];
	}
    printf("Enter quantum time");
    scanf("%d",&qt);
    while( 1)
    {
    for(i=0;i<n;i++)
    {
    	tempval = qt;
    	if(temp[i]==0)
    	{
    			c+=1;
    		continue;
		}
	    if(temp[i]>qt)
    	{
    	temp[i] = temp[i]-qt;
        }
        else
        if(temp[i]>=0)
        {
        tempval = temp[i];
        temp[i] = 0;
        }
        s = s+tempval;
        tat[i] = s;
    
    	
	}
	if(c==n)
	break;
}

for(i=0;i<n;i++)
{
	wt[i]= tat[i] - bt[i];
}

printf("Process Burst Time TurnaroundTime WaitingTime\n");
for(i=0;i<n;i++)
{
	printf("%d\t%d\t%d\t%d\n",i+1,bt[i],tat[i],wt[i]);
	twt+=wt[i];
	ttat+=tat[i];
}

printf("Average Waiting Time = %f\t Average Turn Around time = %f",twt/(float)n,ttat/(float)n);
}
