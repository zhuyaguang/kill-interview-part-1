#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d =",num);
    for (int i = 2; i < num; ++i)
    {
       if (num % i == 0)
       {
         printf("%d*",i);
         num = num / i;
       }
    }
    printf("%d\n",num);

    
}