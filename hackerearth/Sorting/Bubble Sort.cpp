#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;	
}

int buble(int A[],int n)
{
	int i,count=0,flag=1;
	while(flag!=0)
	{
		flag = 0;
		count++;
		for(i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1])
			{
				swap(A[i],A[i+1]);
				flag=1;	
			}	
		} 
	}
	return count;
}

int main()
{
		int n;
		cin>>n;
		int A[n];
		
		for(int i=0;i<n;i++)cin>>A[i];
		
	cout<<buble(A,n)<<endl;
		
		//	for(int i=0;i<n;i++)cout<<A[i]<<' ';
}
