#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	int n,m,a[t];
	int idx=0;
	while(t--)
	{
		cin>>n>>m;
		int c=0,max=-1;
		string s;
		
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<s.length();j++)
			{
				if(s[j]=='#')c++;
			}
			if(c>max)max=c;
			c=0;
		}
		cout<<max<<endl;		
	}
}
