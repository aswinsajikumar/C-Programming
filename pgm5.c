#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,ar;
	printf("Enter the values of a,b & c:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;	
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area using Heron's Formula is %lu\n",sizeof(char));
}
