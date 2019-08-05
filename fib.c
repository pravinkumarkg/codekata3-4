#include <stdio.h>
 void main()
{
    int fib1 = 1, fib2 = 1, fib3, num, count = 0;
	scanf("%d", &num);
	printf("%d\t%d\t", fib1,fib2);
    count = 2; 
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\t", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
