#include<stdio.h>
int main()
{
int a,b,c=0,n;
printf("Enter the number:");
scanf("%d",&a);
n=a;
while(a>0)
	{
	b=a%10;
	c=c+(b*b*b);
	a=a/10;
	}
if(n==c)
printf("Armstrong Number\n");
else
printf("Not Armstrong Number\n");
}
