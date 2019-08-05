#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 
int main()
{
    char str[str_size];
    int ind, splchar;
    ind = splchar = 0;
    gets(str);
    while(str[ind]!='\0')
    {
      if(!((str[ind] >= 65 && str[ind] <= 90) || (str[ind] >= 97 && str[ind] <= 122) || (str[ind] >= 48 && str[ind] <= 57) || str[ind] == ' '))
    	splchar++;
      ind++;
    }
    printf("%d\n", splchar);
}
