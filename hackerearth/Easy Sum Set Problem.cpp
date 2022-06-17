#include <bits/stdc++.h>
using namespace std;

bool check(int a[],int size, int key)
{
	bool flag = false;
	for(int i=0;i<size;i++)
	{
		if(a[i]==key)
		{
			flag = true;
			break;
		}
		else flag = false;
	}
	return flag;
}

int main()
{
	int n,m;
		
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)cin>>a[i];
	
	cin>>m;
	int c[m];
	
	for(int i=0;i<m;i++)cin>>c[i];
	
	sort(a,a+n);
	sort(c,c+m);
	
	int idx=0,b[n+m];
		
	for(int k=1;k<100;k++)
	{	
		int temp=0;
		bool flag = true;
		for(int i=0;i<n;i++)
		{
			temp = k+a[i];
			if(check(c,m,temp))
			{
				flag = true;	
			}	
			else{
				flag = false;
				break;
			}
		}
		if(flag) b[idx++]=k;	
	}
	
	for(int i=0;i<idx;i++)cout<<b[i]<<' ';
}
