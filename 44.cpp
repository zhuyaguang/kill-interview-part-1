#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int a[]={1,5,33,53,23,19,34,56,78,22,234};
  int length;
  int t;
  length = sizeof(a)/sizeof(a[0]);

  for (int i = 0; i < length; ++i)
  {
      for (int j = i+1; j < length; ++j)
      {
          if (a[i]>a[j])
          {
              t = a[i];
              a[i] = a[j];
              a[j] = t;
          }
      }
  }

  for (int i = 0; i < length; ++i)
  {
      printf("%d\n", a[i]);
  }

  int low = 0,hight = length - 1;
  int aim;
  scanf("%d",&aim);
while(low <= hight)
{

  int mid = (low +hight)/2;
  

  if (a[mid] == aim)
  {
      cout<<mid<<endl;
      break;
  }else if (a[mid] > aim)
  {
      hight = mid - 1;
  }else
  {
    low = mid + 1;
  }
}













}