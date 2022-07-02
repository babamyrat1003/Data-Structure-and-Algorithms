#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, k;

	    cin >> n >> k;
	
	    bool f = true;
	
	    while (n > 0) {
	
	        if (n % k == 0) {
	
	            n /= k;
	
	        } else {
	            n--;
	            if (n % k != 0) {
	                f = false;
	            }
	        }
	        if (!f)break;
	    }
	    if (f) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	   }
	}
}
