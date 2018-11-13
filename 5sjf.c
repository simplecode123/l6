#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,bt[10],wt[10],tt[10],n,w1=0,t1=0,t;
float aw,at;
printf("Enter number of processes");
scanf("%d",&n);
printf("Enter the burst time");
for(i=0;i<n;i++)
{
printf("\nprocess %d:",i+1);
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(bt[i]>bt[j])
{
t=bt[i];
bt[i]=bt[j];
bt[j]=t;
}
}
}
for(i=0;i<n;i++)
{
wt[0]=0;
tt[0]=bt[0];
wt[i+1]=bt[i]+wt[i];
tt[i+1]=tt[i]+bt[i+1];
w1=w1+wt[i];
t1=t1+tt[i];
}
aw=w1/n;
at=t1/n;
printf("\nbt\twt\ttt\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\n",bt[i],wt[i],tt[i]);
}
printf("aw=%f\tat=%f\n",aw,at);
return 0;
}
