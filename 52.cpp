#include<iostream>
#include<string>
//#include<string.h>
using namespace std;

int main()
{
	 string s;   
   cin>>s;   
    for (int i=0;i<s.size();i++) //枚举字符串的每一位     
    {   
       if (s[i]>='0' && s[i]<='9') continue; //遇到数字就跳过     
       if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a'; //遇到大写字母就改成小写     
        cout<<s[i];   
    }   
	    cout<<endl;   

	
	system("pause");
}