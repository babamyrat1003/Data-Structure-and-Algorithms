#include<bits/stdc++.h>
using namespace std;
int main() {

		int t;
		cin>>t;

		while(t--)
		{
			int n,sum=0;
			cin>>n;

			int a[n];

			for(int i=0;i<n;i++)cin>>a[i];

			map<int,int> mp;

			for(int i=0;i<n;i++)
			{
				if(mp.find(a[i])!=mp.end())
				{
					sum+=abs(mp[a[i]]-i);
					mp[a[i]]=i;
				}
				else
				mp[a[i]]=i;
			}
			cout<<sum<<endl;
		}
}
