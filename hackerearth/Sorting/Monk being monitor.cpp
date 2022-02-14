#include<iostream>
#include<string.h>
#include<algorithm>
#define MAX 1000001

using namespace std;
int a[MAX];
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		
		int n;
		cin>>n;
		memset(a,0,MAX);
		int max=0;
		for(int i=0;i<n;i++)
		{
			int hold;
			cin>>hold;
			if(max<hold)
				max=hold;
			a[hold]++;
		}
		sort(a, a+max+1, greater<int>());
		
		for(int i=0;i<max;i++)
		cout<<a[i]<<endl;
//		int i;
//		for(i=0;i<max&&a[i]!=0;i++);
//		cout<<((a[0]-a[i-1])==0?-1: a[0]-a[i-1])<<endl;
	}
}















//#include<bits/stdc++.h>
//using namespace std;
//
//bool check(int A[], int n, int diff)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(A[i]==diff)return 1;
//		else return 0;
//	}
//}
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		int A[n];
//		
//		int min, max;
//		cin>>A[0];
//		min=A[0];
//		max=A[0];
//		for(int i=1;i<n;i++)
//		{
//			cin>>A[i];	
//			if(A[i]>max)max=A[i];
//			else if(A[i]<min)min=A[i];
//		}
//		bool f;
//		for(int i=0;i<n;i++)
//		{
//			if(A[i]==max-min)
//			{
//				f=true;
//				break;
//			}
//			else f=false;
//			
//		}
//		
//		if(f)cout<<max-min;
//		else cout<<1;
//	}
//}
