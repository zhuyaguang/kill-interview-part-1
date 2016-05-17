#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int num[5];
	for(int i =0;i<5;i++)
	{
		cin>>num[i];
	}
	sort(num,num+5);
	int sum = 0;
	int i=0;
	for(i=0;i<5;i++)
	{
		if(sum+num[i]>100) break;
		else sum = sum +num[i];
	}
	cout<<i<<endl;
	system("pause");
}