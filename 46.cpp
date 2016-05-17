#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    q.push(i+1);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    q.push(q.front());
    q.pop();
  }
  cout<<endl;
  return 0;
}













