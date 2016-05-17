#include <stdio.h>
#include <string.h>
int main()
{
  int a,num;
  scanf("%d%d",&a,&num);
  int s = 0;
  while(num!=0)
  {
    s = s + a;
    a = a * 10 + a;
    num--;
  }
  printf("%d\n",s);
  return 0 ;
}