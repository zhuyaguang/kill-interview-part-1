#include<iostream>
#include<string>
//#include<string.h>
using namespace std;

int main()
{
	 string s; 
	 int biggest=0;  
	 int ascall[200];
   cin>>s;   
   memset(ascall,0,sizeof(ascall));
    for (int i=0;i<s.size();i++) //枚举字符串的每一位     
    {   
          int num = s[i];
			 ascall[num]++;
			 if(ascall[num]>biggest)
			 {
				 biggest = ascall[num];
			 }
    }   
	    
	for(int i =0;i<127;i++)
	{
		
		if(biggest == ascall[i])
		{
			cout<<char(i);
			break;
		}
		
	}
	
	system("pause");
}