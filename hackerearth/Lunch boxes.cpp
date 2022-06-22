#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		
		long long a[m];
		for(long long i=0;i<m;i++)cin>>a[i];
		
		sort(a,a+m);
		
		long long c=0,sum=0;
		
		while(sum<n)
		{			
			sum+=a[c];
			c++;
		}
		
	   if(sum>n)
		{
			c--;
			
		}
		cout<<c<<endl;
	}
}
