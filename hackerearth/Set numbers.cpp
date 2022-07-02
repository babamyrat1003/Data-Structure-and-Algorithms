#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int t,s;
		t=1;
		s=1;
		
		
		while(s<=n)
		{
			t*=2;
			if(s+t>n)
				break;
			else 
			{
				s+=t;				
			}
		}
		cout<<s<<endl;	
	
	}
}
