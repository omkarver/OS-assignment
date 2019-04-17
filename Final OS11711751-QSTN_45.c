#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
	int n,bt[10],pr[10],wt[10],at[10],tat[10];
	int temp,pos,i,j,temp2[10],awt=0;
	
	printf("Let teacher/student be processes and as the process entered they wait in queue.!\n");
	
	printf("Enter the no. of process: ");
	scanf("%d",&n);
	printf("\nLowest the number greater the priority\n");
	printf("\nEnter burst time and priority for respective process\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter burst time and priority for '%d' process: ",i+1);
		scanf("%d%d",&bt[i],&pr[i]);
	}
	
	printf("Enter Arrival time for each process");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
/*	printf("\nEnter priority of entered processes\n");
	for(int i=1;i<=n;i++)
	{
		 printf("Enter priority of '%d' process",i);
		 scanf("%d",&pr[i]);
	}*/
	
	printf("\n*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*\n");
	printf("Process\tBurst_Time\tPriority\tArrival Time\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t%d\n",i+1,bt[i],pr[i],at[i]);
		//sleep(1);
	}
	
	for(i=0;i< n;i++)
	{
		pos=i;
		for(j=i+1;j<=n;j++)
		{
			if(pr[j]<pr[pos])
			pos=j;
		}
		
		temp=pr[i];
		pr[i]=pr[pos];
		pr[pos]=temp;
		
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
	}
	
	printf("\n*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*`*\n");
	printf("The sequence according which processes in waiting queue are solved is below.\n");
	printf("Process\t  Burst_Time\tPriority\n");
	for(i=1;i<=n;i++)
	{
		printf("   %d\t     %d\t   \t   %d\n",i+1,bt[i],pr[i]);
		//sleep(1);
	}
	
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	temp2[0]=0;
	printf("\nFinal calculation waiting time and turn around time.\n");
	printf("Process\t Burst_time\t Arrival_time\t Waiting_time\t TAT\n");
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		temp2[i+1]=temp2[i]+bt[i];
		wt[i]=temp2[i]-at[i];
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		
		printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	}
	
	awt=awt/n;
	printf("\nAverage waitng time is %d",awt);
	
	
		printf("As the processes come and wait if they are solved by FIFS basis then waiting time increases So they are solved by 'PRIORITY' Scheduling.\n");
	//printf("\nSorting of processes according to their priority \n");
	
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<=n;j++)
		{
			if(pr[j]<pr[pos])
			pos=j;
		}
		
		temp=pr[i];
		pr[i]=pr[pos];
		pr[pos]=temp;
		
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
	}
	
	return 0;
}
