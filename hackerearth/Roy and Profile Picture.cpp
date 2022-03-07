#include<iostream>
using namespace std;
int main()
{
	int l,w,h,n;
	cin>>l>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>w>>h;
		if(w<l or h<l)cout<<"UPLOAD ANOTHER"<<endl;
		else if(w>=l and h>=l and w==h) cout<<"ACCEPTED"<<endl;
		else cout<<"CROP IT"<<endl;
	}
}
