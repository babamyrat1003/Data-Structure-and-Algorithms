#include<iostream>
using namespace std;
int main()
{	
	int t,n;	
	cin>>t;
		
	for(int i=0; i<t; i++){
	
		cin>>n;
		
		int A[n];
		
		int j = 0;
		
		while(j<n){
		
		cin >> A[j];
		
		j++;
		
		}
		
		int ans = 1;
		
		for(int k = 1; k<n; k++){
		
		if( A[k] < A[k-1])
		
		ans++;
		
		}
		
		cout << ans <<endl;
	
	}
	
	return 0;

}
