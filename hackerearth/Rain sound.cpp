#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;	
	cin>>t;	
	while(t--)
	{
	
		int l,r,s;
		cin>>l>>r>>s;
		
		int min=l/s;
		int max=r/s;
		
		if(l%s!=0)
		{
			min=min+1;
		}
		
		if(min<=max)
		{
		  cout<<min<<" "<<max<<endl;
		}
		else
		{
			 cout<<"-1"<<" "<<"-1"<<endl;
		}
	}

}
