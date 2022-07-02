#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main()
{

	ll p=pow(10,9)+7;	
	ll n,m,rem,w=1;
	
	cin>>n>>m;
		
	while(m>0)
	{	
		w=((w*m)%p);
		m--;
	}
	cout<<w;	
	return 0;
}
