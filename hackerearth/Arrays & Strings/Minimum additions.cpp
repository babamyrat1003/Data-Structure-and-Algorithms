#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		int sum=0,i,A[n];
		
		for(i=0;i<n;i++)
		{
			cin>>A[i];
			sum+=A[i];
		} 
	
		int avg=0;
		avg=sum/n;
		if(avg<=k)cout << 0 << '\n';
		else{
			
			int ans = sum/(k+1) - n +1;
			cout << ans << '\n';
		}
	}
	
	
	
}
