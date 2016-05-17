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
       if (s[i]>='0' && s[i]<='9') continue; //    
       if (s[i]>='A' && s[i]<'Z') s[i]=s[i]-'a'+'b';  
	   if(s[i]=='z') s[i] = 'a';
	   if(s[i]=='Z') s[i] = 'A';
	    if (s[i]>='a' && s[i]<'z') s[i]=s[i]-'a'+'b'; 
        cout<<s[i];   
    }   
	    cout<<endl;   

	
	system("pause");
}

//第二种解法
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
void stringchang(const char*,char*);
int main()
{
    char input[100],output[100];
	cin.getline(input,100);
	stringchang(input,output);
	cout<<output<<endl;
	
	system("pause");
}
void stringchang(const char* input,char* output)
{   
	int m=strlen(input),n=0;
	for(int i=0;i<m;i++)
	{
		if(isalpha(input[i]))
		{
			if(input[i]=='z')
				output[n++]='a';
			else if(input[i]=='Z')
				output[n++]='A';
			else
				output[n++]=input[i]+1;

		}
		else
			output[n++]=input[i];
	}
	output[n]='\0';
	
}
	

