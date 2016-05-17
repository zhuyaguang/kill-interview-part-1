#include<iostream>
//#include<string>
//#include<string.h>
using namespace std;

int main()
{
	int arr[100];
	for(int i =0;i<=63;)
	{
		for(int j =1;j<=4;j++)
		{
			for(int k =1;k<=4;k++)
			{
				for(int l =1;l<=4;l++)
				{
					arr[i++]=j*100+k*10+l;
				
				}
			}
			
		}
	}
	for(int i =0;i<=63;i++)
	{
		int ge = arr[i]%10;
		int bai = arr[i]/100;
		int shi = (arr[i] - 100*bai)/10;
		if(ge!=bai && ge != shi && shi!=bai)
		{
			cout<<arr[i]<<endl;
		}
		
	}
	
	system("pause");
}