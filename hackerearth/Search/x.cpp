#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int A[n];
	for(int i=0; i<n;i++) cin>>A[i];

	int queryOfNumber;
	cin>>queryOfNumber;
	
	for(int i=0;i<queryOfNumber;i++)
	{
		int x;
		int m;
		cin>>x>>m;
		
		if(x==0)
		{
			int	counter=0;
			for(int i=0;i<n;i++)
			{
				if(A[i]<=x)
				{
					counter++;
					cout<<counter<<endl;
				}
				
			}
		
		}
		else if(x==1)
		{
			int	counter=0;
			for(int i=0;i<n;i++)
			{
				if(A[i]<x)
				{
					counter++;
					cout<<counter<<endl;
				}
				
			}
			
		}
			
	}
}
