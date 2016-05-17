#include<iostream>
#include<algorithm>
using namespace std;
//判断一个数字是否是回文
bool IsPalindrome(int iCandidate)  
 {  
     if(iCandidate<0)//负数肯定不是回文  
         return false;  
     else  
     {  
        if(iCandidate<=9)//长度为1的整型数肯定是回文  
           return true;  
        else  
        {  
            //获得逆转值  
            int iSrc=iCandidate;  
            int iDst=0;  
            int iPivot=0;  
            int iPower=0;  
            //获得iCandidate的逆转值  
            while(iSrc!=0)  
            {  
                iDst=iDst*10+iSrc%10;  
                iSrc=iSrc/10;  
            }  
            //比较正序值与逆转值；如果一致，则是回文；否则不是回文  
            if(iDst==iCandidate)  
                return true;  
            else  
                return false;  
        }  
     }  
 }  

int main()
{
	char a[20];
	int len, id=1;
	cout << "请输入字符串：";
	cin >> a;
	len = strlen(a);
	for(int i=0, j=len-1; i<j ; i++, j--)
	{
	if(a[i] != a[j])
	{
	id = 0;
	break;
	}
	} 
		if(id == 1)
		cout << "字符串是回文"<<endl;
		else
		{
		cout << "字符串不是回文" <<endl;
		}
		
    cout<<IsPalindrome(1233211);
	system("pause");
}
//判断字符串是不是回文
#include<iostream>
#include<string>
using namespace std;
int ishuiwen(char *str)
{
		char *start =str;//头指针

	char *end2 =str;
	while(*end2++);
	end2 = end2 -2;//尾指针
	while(start<end2)
	{
		if(*start++!=*end2--)
		{
			return 1;
			break;
		}else return 0;
	}
}
int main()
{  
	string str;
	getline(cin,str);
	int m=str.size();
	for(int i=0;i<m/2;i++)
	{
		if(str[i]!=str[m-1-i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}

