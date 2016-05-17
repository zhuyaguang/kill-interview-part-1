#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n),n);
    {
        int x,sum=0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d",&x);
            sum = sum + x * x;
        }
   printf("%d\n",sum);      
    }
 
    return 0;
}