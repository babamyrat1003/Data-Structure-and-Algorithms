#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,b1,b2;
		cin>>n>>b1>>b2;
		
		ll ans=0,x,y;
		
		x = abs(b1-b2)-1;
		y= n-x-2;
		
		if(x>=3)
		{
			ans += (x-2);
			ans += (x-2) * (x-3);
		}
		
		if(y>=3)
		{
			ans += (y-2);
			ans += (y-2) * (y-3);
		}

		if(x>=2)
		{
			ans += (x-1) * y;	
		}
		
		
		if(y>=2)
		{
			ans += (y-1) * x;	
		}		
			
		cout<<ans<<endl;
	}	
}
