#include<iostream>
using namespace std;
int main()
{
	int x,y,s,t;
	cin>>x>>y>>s>>t;
	
	int c=0;
	for(int i=x;i<=x+s;i++)
	{
		for(int j=y;j<=y+s;j++)
		{
			if(i+j<=t)c++;
		}
	}
	
	cout<<c;
}
