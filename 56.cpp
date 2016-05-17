#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int num[10];
	for(int i =0;i<10;i++)
	{
		cin>>num[i];
	}
	int line = 60;

	for(line = 60;line>0;line=line-10)
	{
		int count = 0;
		for(int i =0;i<10;i++)
		{
			if(num[i]>=line)
			{
				count++;
			}
		}
		if(count>=6) break;
		
	}
	cout<<line;
	system("pause");
}