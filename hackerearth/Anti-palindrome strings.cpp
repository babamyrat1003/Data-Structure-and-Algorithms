#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long tc;
    cin>>tc;

    string s1;
    string s2;

    for(long i=0;i<tc;i++)
    {
        cin>>s1;
        s2=s1;
        reverse(s2.begin(),s2.end());
        if(s2==s1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            sort(s1.begin(),s1.end());
            cout<<s1<<endl;
        }

    }
}
