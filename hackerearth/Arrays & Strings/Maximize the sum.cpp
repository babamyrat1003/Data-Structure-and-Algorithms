#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
			int n,k;
        cin>>n>>k;

        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];

        sort(A,A+n);
        
        int c=0, j,sum;
        for(j=n-1;j>=1;j--)
        {
        	if(A[j]!=A[j-1])c++;
        	if(c==k)
			{
				sum=0;
        		for(int i=n-1;i>=j;i--)	sum+=A[i];
        	
        		break;
			}
        	
		}
			cout<<sum<<endl;
	}
  	
}

