#include<stdio.h>
int main()
{
	float a;
	printf("Enter the decimal number:");
	scanf("%f",&a);
	int b=a;
	float c=a-b;
	printf("Integer value is %d\n",b);
	printf("Decimal value is %f\n",c);
}
