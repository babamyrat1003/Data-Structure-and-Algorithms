#include <bits/stdc++.h>
using namespace std;
int maxAndXor(int arr[], int n)
{
    int ans = INT_MAX;
 
    sort(arr, arr + n);
 
     for (int i = 0; i < n - 1; i++) {

        ans = min(ans, arr[i] ^ arr[i + 1]);
    }
 
    return ans;
}
 
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int A[n];
		
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
		cout<<maxAndXor(A,n)<<endl;		
	}
    return 0;
}
