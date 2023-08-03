#include<stdio.h>
void swap(int *a,int *b)
{
	int c ;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("SWAP THAN A:%d\n",*a);
	printf("SWAP THAN B:%d",*b);
}
main()
{
	int a,b;
	
	printf("ENTER A =");
	scanf("%d",&a);
	
	printf("ENTER B =");
	scanf("%d",&b);
	
	swap(&a,&b);
}
