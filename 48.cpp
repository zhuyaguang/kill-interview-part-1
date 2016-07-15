#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(!a && !b){
            break;
        }
        int c = 0,ans = 0;
        for (int i = 1; i <= 9; ++i)
        {
            a%10+b%10+c>9?c=1:c=0;
            ans = ans + c;
            a = a / 10;
            b = b / 10;
        }

        printf("%d\n",ans);

    }
}