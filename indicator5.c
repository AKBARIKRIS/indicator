#include <stdio.h>
void initialize(int *a,int *b,char *c)
{
    *a = 10;
    *b = 20;
    *c = 'k';
}
main()
{
    int a, b;
    char c;
 
    initialize(&a, &b, &c);
    printf("a = %d,\nb = %d,\nc = %c",a,b,c);
}
