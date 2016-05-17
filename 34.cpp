#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int unsigned m[90];
    m[0]=1;
    m[1]=2;
    for (int i = 2; i < 90; ++i)
    {
        m[i] = m[i-1] + m[i-2];
    }
    int num;
    while(scanf("%d",&num),num)
    {
   printf("%llu\n",m[num - 1]);
    }
    return 0;
}