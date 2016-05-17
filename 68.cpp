#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void mul(char*,int,char*,int,char*);
int main()
{   
   char input1[100],input2[100],output[100];
   cin>>input1>>input2;
   int n=strlen(input1);
   int m=strlen(input2);
   mul(input1,n,input2,m,output);
   cout<<output<<endl;
	return 0;
}
void mul(char* input1,int n,char* input2,int m,char* output)
{
	int i1=0,i2=0,p1=n,p2=m,p3=0;
	for(int i=0;i<n;i++)
	{
		i1+=(input1[i]-'0')*pow(10.0,--p1);
	}
	for(int i=0;i<m;i++)
	{
		i2+=(input2[i]-'0')*pow(10.0,--p2);
	}
	long long ou=i1*i2;
	if(ou==0)
	{
		output[0]='0';
		output[1]='\0';
		return;
	}
	char temp;
	while(ou>0)
	{
		output[p3++]=ou%10+'0';
		ou/=10;
	}
	output[p3]='\0';
	for(int i=0;i<p3/2;i++)
	{
		temp=output[i];
		output[i]=output[p3-1-i];
		output[p3-1-i]=temp;
	}
}

	

