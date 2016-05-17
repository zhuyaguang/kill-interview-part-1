#include <stdio.h>
#include <string.h>

int main()
{
   for (int i = 101; i < 200; ++i)
   {
       for (int j = 2; j < i; ++j)
       {
           if (i % j ==0)
           {
               break;
           }
           else printf("%d  ", i);
           break;
       }
   }
}
