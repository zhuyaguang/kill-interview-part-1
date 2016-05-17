#include <stdio.h>
#include <iostream>
int main()
{
    int a[100],n = 0;
    int num = 0;
    while(scanf("%d",&num),num)
    {
        a[n++] = num;
    }

 for (int i = n - 1; i >= 0; i--)
 {
     printf("%d\n",a[i]);
   
 }

    return 0;

}