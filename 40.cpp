#include <stdio.h>
#include <iostream>
int main()
{
    int a[1000];
    memset(a,0,sizeof(a));// 初始化数组
    int n = 0,k = 0;
    scanf("%d%d",&n,&k);
    for (int i = 1; i < k; ++i)
    {
        int j = 1;
        for ( j = 1; i*j < n; ++j)
        {
            if(a[i*j]==0)
            { 
            a[i*j]=1;
            }
            else a[i*j]=0;
        }
    }

    for (int l = 0; l <= n; ++l)
    {
        if(a[l]==0)
        printf("%d\n",l);
    }


    return 0;

}