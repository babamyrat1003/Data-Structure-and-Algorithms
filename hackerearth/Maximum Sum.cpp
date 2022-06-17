#include<iostream>
using namespace std;
int main()
{
	long long  n;
	cin>>n;
	long long a[n],count=0,sum=0;
	
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];

		if(a[i]>=0)
		{
			sum+=a[i];
			count++;
		}
	}
	if(sum==0)
	{
		sum=a[0];
		for(long long i=0;i<n;i++)
		{
			if(a[i]>sum)sum=a[i];
		}
		count = 1;
	}
	cout<<sum<<" "<<count;
	
}
