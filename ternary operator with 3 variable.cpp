#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value of A=");
	scanf("%d",&a);
	printf("Enter value of B=");
	scanf("%d",&b);
	printf("Enter value of c=");
	scanf("%d",&c);
	
	(a>b)?(a>c)? printf("A is max."):printf("C is max.")
	     :(b>c)? printf("B is max."):printf("C is max.");
}
