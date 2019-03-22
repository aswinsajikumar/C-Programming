#include <stdio.h>
int main()
{
int i,j,flag=0,a,b;
printf("Enter the range a & b:");
scanf("%d%d",&a,&b);
for(j=a;j<b;j++)
	{	
	for(i=2;i<j;i=i+1)
		{
		if(j%i==0)
		{flag=1;
		break;}
		else
		flag=0;
		}
	
	if(flag==0)
	printf("%d\n",j);
	}
}

