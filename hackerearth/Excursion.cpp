#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		
		int b=0,g=0;
		
		if(n==0)b=0;
		if(m==0)g=0;
		
		if(n==k)b=1;
		if(m==k)g=1;
		
		if(n>k && n%k==0)b=n/k;
		if(n>k && n%k!=0)b=n/k+1;
		
		if(m>k && m%k==0)g=m/k;
		if(m>k && m%k!=0)g=m/k+1;
		
		if(n<k and n!=0)b=1;
		if(m<k and m!=0)g=1;
		
		cout<<g+b<<endl;
	}
}
