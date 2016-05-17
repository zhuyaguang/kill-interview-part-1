#include <stdio.h>
#include <string.h>

int main()
{
   long long a[30];
   long long sum = 0;
   a[0]=1,a[1]=1;
   for(int i=2;i<=30;i++)
   {
    a[i]=a[i-1]+a[i-2];
   }

   for(int j=0;j<=12;j++)
   {
      sum+=a[j];
      printf("the %d month is %lld\n",j+1 ,sum);
   }
}