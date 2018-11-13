#include<stdio.h>
void main()
{
int st[10],bt[10],wt[10],tt[10],n,tq,i,count=0,swt=0,stt=0,temp,sq=0;
float awt,att;
printf("Enter no of processes");
scanf("%d",&n);
printf("Enter burst time for sequence");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
st[i]=bt[i];
}
printf("Enter time quantum");
scanf("%d",&tq);
while(1)
{
for(i=0,count=0;i<n;i++)
{
temp=tq;
if(st[i]==0)
{
count++;
continue;
}
if(st[i]>tq)
st[i]=st[i]-tq;
else
if(st[i]>=0)
{
temp=st[i];
st[i]=0;
}
sq=sq+temp;
tt[i]=sq;
}
if(n==count)
break;
}
for(i=0;i<n;i++)
{
wt[i]=tt[i]-bt[i];
swt=swt+wt[i];
stt=stt+tt[i];
}
awt=(float)swt/n;
att=(float)stt/n;
printf("process no\tburst time\twait time\t turn around time\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\t%d",i+1,bt[i],wt[i],tt[i]);
}
printf("\navg wait time is %f avg tat is %f",awt,att);
}
