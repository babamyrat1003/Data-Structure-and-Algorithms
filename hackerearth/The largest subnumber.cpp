#include <bits/stdc++.h>
using namespace std;
int main()
{

long long t,x,y;
cin>>t;
while(t>0)
{
	cin>>x>>y;
	if((x<0 || y<0 )|| y>x)
	{	
	  cout<<-1<<endl;
	}
	else
	{
	  cout<<x<<endl;
	}
	  t--;
	}
	return 0;

}
