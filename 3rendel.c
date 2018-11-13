
#include<stdio.h>
#include<fcntl.h>
#include<sys/errno.h>
#include<errno.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdlib.h>
int rename1()
{
int ret;
char oldname[20],newname[20];
printf("Enter old name:");
scanf("%s",oldname);
printf("Enter new name");
scanf("%s",newname);
ret=rename(oldname,newname);
if(ret==0)
printf("Filename renamed succesfully");
else
printf("file name unable to rename");
return 0;
}
int remove1()
{
int status;
char filename[20];
printf("Enter filename");
scanf("%s",filename);
status=remove(filename);
if(status==0)
printf("file deleted succesfully");
else
printf("unable to delete");
return 0;
}
int main()
{
int ch;
printf("Enter choice");
printf("\n1.rename\n2.remove\n3.OPI\n4.execute mode 644\n");
while(1)
{
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:rename1();
	break;
case 2:remove1();
	break;
case 3:printf("o/p process information");
	system("ps");
	break;
case 4:printf("execute mode 644 ls");
	system("ls -l");
	break;
case 5:exit(0);
}
}
}
