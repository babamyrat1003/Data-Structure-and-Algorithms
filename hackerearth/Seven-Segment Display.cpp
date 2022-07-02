#include<bits/stdc++.h>
using namespace std;
int main() {

    int t, x;

    string n;

    cin>>t;

    int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    while(t--) {

        cin>>n;

        int total=0;

        for (int i=n.length() -1; i>=0; i--) total+=arr[n[i]-'0'];  

        for (x=0;; x++) if ((total-3*x) %2==0) break;

        int left= (total-3*x) /2;  

        while (x--) cout<<7;

        while (left--) cout<<1;

        cout<<'\n';

    }

}
