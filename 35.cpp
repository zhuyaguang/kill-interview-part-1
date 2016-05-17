#include <iostream>
#include <cstdio>
using namespace std;

int binary_search(int len,int num[],int request)
{
    int left = 0, right = len-1,mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if (num[mid] == request)
        {
            return mid;
        }
        else if (request < num[mid])
        {
            right = mid;
        }else if(request > num[mid])
        {
            left = mid +1;
        }              
    }
    return -1;
}
int main()
{
    int const LEN = 10000;
    int a[LEN];
    for (int i = 0; i < LEN; ++i)
    {
        a[i] = i - 5000;
    }
    int goal = 0 ;
    int index = binary_search(LEN,a,goal);
    if (index == -1)
    {
        cout<<goal<<"is"<<"error"<<endl;
    }else{
        cout<<goal<<"is"<<index<<endl;
    }
   
}