#include<stdio.h>
void main()
{
int n;
printf("Enter number of processes:\n");
scanf("%d",&n);
int wt[n],bt[10],tat[n];
float avgtat,avgwt;
for(int i=0;i<n;i++)
{
printf("Enter burst time of process %d\n",i+1);
scanf("%d",&bt[i]);
}
wt[0]=avgwt=0;
tat[0]=avgtat=bt[0];
for(int i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
avgtat=avgtat+tat[i];
avgwt=avgwt+wt[i];
}
printf("Process   Burst Time  Turn Around Time    Wait Time\n");
for(int i=0;i<n;i++)
{
printf("%d         %d            %d                  %d\n",i+1,bt[i],tat[i],wt[i]);
}
avgwt=avgwt/n;
avgtat=avgtat/n;
printf("Average waiting time:%f\n",avgwt);
printf("Average turn around time:%f\n",avgtat);
}
