#include <stdio.h>
#include <string.h>

int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int x,y,temp;
    if (num1 < num2)
    {
       temp = num1;
       num1 = num2;
       num2 = temp;
    }
   x = num1;
   y = num2;
    while(y != 0)
    {
      temp = x % y ;
      x = y;
      y = temp;
    }
    printf("max is %d  ",x);
    printf("min is %d\n", num1 * num2 / x);

    
}