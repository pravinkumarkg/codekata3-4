#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
    int a,b,temp;
    scanf("%d %d", &a, &b);
    swap(&a, &b);    
    printf("%d\t%d\t",a,b);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
