#include<stdio.h>
int main()
{
 int s,op,sw=1,p,e2;
 printf("Enter the number of elements:");
 scanf("%d",&s);
 int a[s];
 for(int i=0;i<s;i++)
 {
  printf("Enter the number:");
  int x;
  scanf("%d",&x);
  a[i]=x;
 }

 do
 {
   printf("########### MENU ###########\n1.To insert an element in a particular position\n");
   printf("2.To delete an element from the array\n3.To display the elements\n4.To exit\nEnter the option:");
   scanf("%d",&op);
  switch(op)
  {
	case 1:
		{
		int e;
		printf("\nEnter the position:");
		scanf("%d",&p);
		printf("\nEnter the new element:");
		scanf("%d",&e);
		a[p-1]=e;
		break;
		}
	case 2:
		printf("Enter the element to be deleted:");
		scanf("%d",&e2);
		for(int i=0;i<s;i++)
		{
		 if(a[i]==e2)
		 {
		  while(i<s-1)
		  {
		   a[i]=a[i+1];
		  }
		  s=s-1;
		  break;
		 } 
		}
		break;
	case 3:
		 printf("\nElements of the array are:");
		 printf("%d",a[0]);
		for(int i=1;i<s;i++)
		{
		 printf(",%d",a[i]);
		}
		printf("\n");
		break;
	case 4:
		sw=0;
		break;
	default:
		printf("!!!!Wrong choice!!!!");
	}
	op=1;
   }while(sw==1);
   return 0;
   }
