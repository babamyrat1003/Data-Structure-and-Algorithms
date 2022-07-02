#include<bits/stdc++.h>
using namespace std;

string solve (int n, int k, string s) {
   
   long long p = n + k;
   
   bool fl = false;
   string ss = s.substr(0,n);
   
   while(ss.length()!=p)
   {
   		for(int i=0; i<n; i++)
		  {
		   		if(ss.length()<p)
		   			ss+=s.substr(0,i);
		   		if(ss.length()==p)
		   		   break;
		   }
   }   
   
   return ss;
 
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int K;
        cin >> K;
        string S;
        cin >> S;

        string out_;
        out_ = solve(N, K, S);
        cout << out_;
        cout << "\n";
    }
}
