#include<iostream>
using namespace std;
int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int A[n];
	for(int i=0;i<n;i++)cin>>A[i];
		
	int counter=0;
	for(long long int i=0;i<n;i++)
	{	
	
		bool checkValue = false;
		for(int k=0;k<=n-i;k++)
		{
			int sum=0;
		
			for(int j=k;j<=k+i;j++)
			{
				sum+=A[j];
			}
			
			if(sum<=x)checkValue=true;
			else
			{
				checkValue = false;
				break;
			}
				
		}
		
		if(checkValue)counter++;
	}
	
	cout<<counter<<endl;
}
