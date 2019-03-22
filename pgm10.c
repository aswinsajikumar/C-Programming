#include <stdio.h>
int main()
{
int a,b,c=0,n;
printf("Enter the number:");
scanf("%d",&a);
n=a;
while(a>0)
{
	b=a%10;
	c=c*10+b;
	a=a/10;
}
printf("%d is the reversed number\n",c);
if(n==c)
printf("Pallindrome\n");
else
printf("Not Pallindrome\n");
}
