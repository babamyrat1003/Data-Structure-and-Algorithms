#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int A[n],min;
		cin>>A[0];
		min=A[0];
		for(int i=1;i<n;i++){
			cin>>A[i];
			if(A[i]<min)
				min=A[i];
		}

		cout<min<<endl;

	}
}
