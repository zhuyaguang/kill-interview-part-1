#include <stdio.h>
#include <iostream>
using namespace std;
void func(int n,string from,string mid,string to)
{
  if (n == 1)
  {
    cout<<"move from "<<from<<" to "<<to<<endl;
  }
  else{
    func(n-1,from,to,mid);
    func(1,from,mid,to);
    func(n - 1,mid,from,to);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  func(n,"left","mid","right");
}













