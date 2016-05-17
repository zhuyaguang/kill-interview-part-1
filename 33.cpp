#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int cnt;
    int sum = 0;
    while(scanf("%d",&cnt),cnt)
    {
       sum += cnt*cnt*cnt;
    }
    printf("%d\n", sum);
 
    return 0;
}