#include <stdio.h>
#include <string.h>
int main()
{
  static int a[10];
  int s;
  int n;
  for (int i = 2; i < 1000; ++i)
  {
    n = -1;
    s = i;
    for (int j = 1; j < i; ++j)
    {
      
      if (i % j == 0)
      {
        s = s - j;
        a[n] = j;
        n++;
      }
    }
    if (s == 0)
    {
      printf("%d = ", i);
      printf("1");
      for (int i = 0; i < n; ++i)
      {
        printf("+%d", a[i]);
      }
      printf("\n");

    }
  }
}
