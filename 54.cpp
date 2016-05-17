#include<iostream>
#include<algorithm>
using namespace std;
int cal(int x)
{
	int ans = 0;
	while(x!=0)
	{
		ans = ans +x%10;
		x = x/10;
	}
	return ans;
}
int num[10];
int camp(int x,int y)
{
	if(cal(x)!=cal(y))
	{
		return cal(x)<cal(y);
	}else
	{
		return x<y;
	}
}
int main()
{
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
	}
	//sort(num,num+10,camp);
	//for(int i=0;i<10;i++)
	//{
	//	cout<<num[i]<<" ";
	//}

	 for (int i=0;i<=9;i++)   
	    {   	        cout<<num[i];   
	        if (i!=9) cout<<' '; //如果不是最后一个数字，则需要在两个数字中间输出一个空格。   
	    }   
	 cout<<endl;   

	system("pause");
	return 0;
}