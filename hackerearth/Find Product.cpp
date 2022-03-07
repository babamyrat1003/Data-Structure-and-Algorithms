#include<iostream>
#include <math.h> 
using namespace std;
int main()
{
	int n;
	cin>>n;

	int ans=1,cn;
	
	const long long mod=pow(10,9)+7;
	for(int i=0;i<n;i++)
	{
		cin>>cn;
		ans=(ans*cn)%mod;
	}	
	
	cout<<ans<<endl;
}
