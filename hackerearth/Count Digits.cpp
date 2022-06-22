#include<iostream>
using namespace std;
int main()
{
	int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
	
	string s;
	cin>>s;
	
	int h[10];
	for(int i=0;i<10;i++)h[i]=0;
	
	for(int i=0;i<s.length();i++)
	{
		h[s[i]-'0']++;
		
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<i<<' '<<h[i]<<endl;
	}
}
