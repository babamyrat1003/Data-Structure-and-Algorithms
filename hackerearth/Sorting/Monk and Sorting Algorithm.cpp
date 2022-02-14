#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int s[n];
	
	for(i=0;i<n;i++)
		cin>>s[i];

	sort(s,s+n);
	
		for(i=0;i<n;i++)cout<<s[i]<<' ';



}
