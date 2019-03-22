#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<=n-1;i=i+1)
	{
	if(n%i==0)
	{flag=1;
	break;}
	}
if(flag==1)
printf("Not prime number");
else
printf("Prime number");
}
