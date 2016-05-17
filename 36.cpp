#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    long long num, a[200];
    a[1]=1;
    a[2]=2;
    for (int i = 3; i < 99; ++i)
    {
        a[i] = a[i-1]+a[i-2];
    }

    while(scanf("%lld",&num) != EOF)
    {
        printf("%lld\n", a[num]);
    }


   return 0;
}