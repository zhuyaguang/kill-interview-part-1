#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long LL;
const int MX=1009+5;

int ans[MX],n;

void DFS(int pos,int sum,int d){
    sum+=d?pos:-pos;
    ans[pos]=d;

    if(pos==n){
        if(!sum){
            printf("1");
            for(int i=2;i<=n;i++){
                printf("%c%d",ans[i]?'+':'-',i);
            }
            printf("\n");
        }
        return;
    }

    DFS(pos+1,sum,1);
    DFS(pos+1,sum,0);
}

int main(){
    while(~scanf("%d",&n)){
        DFS(1,0,1);
    }
    return 0;
}