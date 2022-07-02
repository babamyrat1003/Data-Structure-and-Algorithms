#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

long long f(long long n)
{
	long long sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	
	return sum*sum*sum;
}

int main()
{
	fast
	long long t;
	cin>>t;
	

	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		
		while(k--)
		{
			n = f(n);
		}
			cout<<n<<endl;
	}

}
