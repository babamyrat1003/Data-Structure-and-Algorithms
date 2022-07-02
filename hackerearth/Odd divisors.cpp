#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;

        long sum = 0;
        while(n>0){
            sum+= ((n/2+n%2)%m)*((n/2+n%2)%m);
            sum = sum%m;
            n = n/2;
        }
        cout<<sum<<endl;
    }

return 0;

}
