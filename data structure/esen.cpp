#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int, int> v; // (x, flag), flag: 0 = Left, 1 = Right
    int n, depth=0, res=0;

    cout<<" n > ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"left > ";
        cin>>left;

        cout<<"right > ";
        cin>>right;

        v.make_pair(left, 0); // BEGIN POINT
        v.make_pair(right, 1); // END POINT
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-1; i++){
        if(v[i].second == 0) depth++; else depth--;
        if(depth > 0) res += v[i+1].first - v[i].first;
    }

    cout<<res;

    return 0;
}
