#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 
int main()
{
    char str[str_size];
    int digit, i;
    digit = i = 0;
    fgets(str, sizeof str, stdin);	
    while(str[i]!='\0')
    {
      if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
     i++;
    }
    printf("%d\n", digit);
}
