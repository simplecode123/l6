#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,bt[10],wt[10],tt[10],n,w1=0,t1=0,t,prior[10],pno[10];
float aw,at;
printf("Enter number of processes");
scanf("%d",&n);
printf("Enter the burst time");
for(i=0;i<n;i++)
{
printf("\nprocess %d:",i+1);
scanf("%d",&bt[i]);
printf("Enter priority");
scanf("%d",&prior[i]);
pno[i]=i+1;
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(prior[i]>prior[j])
{
t=bt[i];
bt[i]=bt[j];
bt[j]=t;
t=prior[i];
prior[i]=prior[j];
prior[j]=t;
t=pno[i];
pno[i]=pno[j];
pno[j]=t;
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
printf("\njob\tbt\twt\ttt\tprior\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\t%d\t%d\n",pno[i],bt[i],wt[i],tt[i],prior[i]);
}
printf("aw=%f\tat=%f\n",aw,at);
return 0;
}
