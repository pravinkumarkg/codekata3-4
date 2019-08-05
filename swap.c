#include <stdio.h>
int main(void)
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d\t%d\t",a,b);
	return 0;
}
