#include<iostream>
using namespace std;


int count(int l, int r, int k)
{
	int c=0, i;
	
	for(i=l;i<=r;i++)
	{
		if(i%k==0) c++;	
	}	
	
	return c;
}

int main()
{
	int l,r,k;
	cin>>l>>r>>k;
	cout<<count(l,r,k);	
}
