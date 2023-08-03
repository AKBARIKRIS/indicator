#include<stdio.h>
main()
{
	int arr[] = {10,20,30,40,50};
	int *p;
		p=&arr;
		
	 	printf("%d\n",*(p+4));
		printf("%d\n",*(p+3));
		printf("%d\n",*(p+2));
		printf("%d\n",*(p+1));
		printf("%d",*(p+0));
}
