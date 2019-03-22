#include <stdio.h>
int main()
{
	float u,a,t,s;
	printf("Enter t:");
	scanf("%f",&t);
	printf("Enter u:");
	scanf("%f",&u);
	printf("Enter a:");
	scanf("%f",&a);
	s=(u*t)+(0.5*a*t*t);
	printf("The distance is %f\n",s);
}
