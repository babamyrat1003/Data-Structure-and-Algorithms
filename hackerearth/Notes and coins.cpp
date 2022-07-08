#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int note[n], coin[n], aa;
	string s[n], ss;
	
	int noteidx=0,coinidx=0;
	while(n--)
	{
		cin>>ss>>aa;
		
		if(ss=="Note")note[noteidx++]=aa;
		if(ss=="Coin")coin[coinidx++]=aa;
	}
	
	cout<<"Coins :"<<endl;
	for(int i=0;i<coinidx;i++)cout<<coin[i]<<endl;
	
	cout<<"Notes :"<<endl;
	for(int i=0;i<noteidx;i++)cout<<note[i]<<endl;
	
}
