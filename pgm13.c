#include<stdio.h>
int main()
{
int a,b,c;
char d,o;
do
	{
	printf("+ or - or * or /:");
	scanf("%c",&d);
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	switch(d)
		{
		case '+':
			c=a+b;
			printf("%d\n",c);
			break;
		
		case '-':
			c=a-b;
			printf("%d\n",c);
			break;

		case '*':
			c=a*b;
			printf("%d\n",c);
			break;
		
		case '/':
			c=a/b;
			printf("%d\n",c);
			break;
		default:
			printf("Error");
			break;
		}
		printf("Do you want to continue:\n");
		scanf("%c",&o);
	}
while(o=='y');
}
