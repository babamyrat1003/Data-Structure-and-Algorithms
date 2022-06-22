#include<bits/stdc++.h>
using namespace std;

bool search(int n, int a[], int key )
{
	bool c = false;
	for(int i=0;i<n;i++)	
	{
		if(key==a[i])
		{
			c = true;
			break;
		}
	}
	
	return c;
}

int repeating(int n, int a[])
{
    for (int i = 0; i < n; i++) 
    {
        int index = a[i] % n;
        a[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] / n) >= 2)
            cout << i << " ";
    }
}

int  minUpdates (int n, int a[], int k) {
	
	if(n%2==1) return -1;
	else
	{
				
	}  
}

int main() {
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
       	int A[N];
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }
//        int K;
//        cin >> K;
//
//        int out_;
//        out_ = minUpdates(N, A, K);
//        cout << out_;
//        cout << "\n";

	    cout<<repeating(N,A);
    }
}
