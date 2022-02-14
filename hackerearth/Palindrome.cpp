#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;

    cin>>s;

    for(int i=0;i < s.length()/2;i++){

    if(s[i]!=s[s.length()-i-1]){

        cout<<"NO";

       break;

}

   else

   cout<<"YES";

   break;

}

return 0;

}
