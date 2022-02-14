#include<bits/stdc++.h>
using namespace std;

string toFront(string s)
{
	char x;
	int i;
	x = s[0];
	for(i=0;i<s.size()-1;i++)
		s[i]=s[i+1];
		s[s.size()-1]=x;
		
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		string s;
		cin>>s;
		int p=-1,i,d;
		string max="";
		
		for(i=0;i<n;i++)
		{
			if(max<s)
			{
				max=s;
				d=i;
			}
			else if(max==s)
			{
				p=i-d;
				break;
			}
			s=toFront(s);				
		}
		
		if(p==-1)
			cout<<(d+(k-1)*n)<<endl;
		else 
		 	cout<<(d+(k-1)*p)<<endl;	
	}
}
