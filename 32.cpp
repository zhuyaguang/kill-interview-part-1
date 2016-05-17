#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[201];
    int cnt;
    gets(str);
    while(scanf("%d",&cnt)==1)
    {
       while(cnt--)
        {
            puts(str);
        }
    }
 
    return 0;
}