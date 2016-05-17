#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    for(int ca =1;ca<=T;++ca)
        {
        int a,b;
        scanf("%d%d",&a,&b);
        long long res =0;
        for(long long i =a;i<=b;++i)
            {
            res +=i*i*i;
        }
        printf("Case #%d: %lld\n",ca,res);
    }
    
    
    
    return 0;
}