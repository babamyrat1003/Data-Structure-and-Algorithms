#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int x=0,y=0,l=s.size();
	
	while(l--)
	{
		if(s[l]=='z')x++;
		else if(s[l]=='o')y++;
	}
	
	if(2*x==y)
		cout<<"Yes";
	else
	 	cout<<"No";
}
