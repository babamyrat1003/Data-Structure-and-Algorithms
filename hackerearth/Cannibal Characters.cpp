#include<bits/stdc++.h>
using namespace std;

int Minimum_Operations (int n, string s) {

	int sum=0,i;
	int a[26]={0};
	for(i=0;i<n;i++)
	{
		a[s[i]-'a']++;
	}
	
	for(i=0;i<26;i++)
	{
		sum+=a[i]/2;
	}
	return sum;
	

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int out_;
        out_ = Minimum_Operations(n, s);
        cout << out_;
        cout << "\n";
    }
}
