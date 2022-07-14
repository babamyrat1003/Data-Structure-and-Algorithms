#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){

        cin>>arr[i];

        mp[arr[i]]=i+1;

    }

    sort(arr,arr+n,greater<int>());

    for(int i=0;i<k;i++){

        cout<<mp[arr[i]]<<" ";

    }

}
