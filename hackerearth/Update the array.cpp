#include<bits/stdc++.h>
using namespace std;

int minUpdates (int n, int arr[], int k) {
  
	int sum=0,d=0;
	 
    // Mark all array elements as not visited
    vector<bool> visited(n, false);
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {
  
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
  
        // Count frequency
      	 int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if(count>1)
		{
			sum+=count;
			d++;
		}        
    }
    
    	int opn = sum-d;
    	int dd=0;
    	
		for(int i=1; i<=k; i++)
    	{
    		int count = 0;
    		for (int j = 0; j < n; j++) 
			{
	            if ( i == arr[j]) {
	                count++;
	                break;
	            }
       		}
       		if(count>0)
       		{
       			dd++;
			}
     	}
     	
     	int kk=k-dd;
     	if(opn<=kk && n%2==0)return 1;
     	else return -1;
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
        
        int K;
        cin >> K;

        int out_;
        out_ = minUpdates(N, A, K);
        cout << out_;
        cout << "\n";
    }
}
