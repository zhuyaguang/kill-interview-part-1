#include <stdio.h>
#include <iostream>

   int f(int n)
{
    
    return n==0?1:f(n-1)*n;
}
int main()
{

       int n,m;
       scanf("%d",&n);
        m=f(n);
       printf("%d",m);
    

return 0;
}