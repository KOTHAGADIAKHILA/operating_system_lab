#include<stdio.h>
int main()
{
	int bt[10],i,wt[10],tat[10],ttat=0,twt=0,f=0,pass=0,j,temp,n,p[10];
	printf("Enter the no of processes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i] = i+1;
	}
	printf("Enter Burst time for each process");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	for(pass = 0;pass<n-1;pass++)
	{
		f = 0;
		for(j =0;j<n-pass-1;j++)
		{
			if(bt[j]>bt[j+1])
			{
				temp = bt[j];
				bt[j] = bt[j+1];
				bt[j+1]= temp;
				f=1;
				
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
				
			}
	
		}
		if(f==0)
			break;
	}

	wt[0] = 0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		twt+=wt[i];
	}
	for(i=0;i<n;i++)
	{
		tat[i] = wt[i]+bt[i];
		ttat+=tat[i];
	}
	printf("process Waiting Time Turn around time\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t  %d\n",p[i],wt[i],tat[i]);
	}
	printf("Average Turn around Time =%f\t AVerage Waiting Time = %f",ttat/(float)n,twt/(float)n);
	return 0;
}
