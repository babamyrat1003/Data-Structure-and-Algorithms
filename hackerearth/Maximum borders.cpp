#include<iostream>
using namespace std;
void  maXBorder(string C[], int A[], int n)
{
	int i,j,k,c,max;
	
	for(i=0;i<2*n-1;i+=2)
	{
		max=0;
		for(j=0;j<A[i];j++)
		{
			for(k=0;k<A[i+1];k++)
			{
				if(C[k]=='#')
					c++;
			}			
			
			if(max<c) max=c;
			c=0;
		}
			cout<<max<<endl;					
	}
}

int main()
{
	int n,i,j,k,aIndex=0,cIndex=0;
	string C;s
	
	cin>>n;
	int A[2*n];	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>A[aIndex++];
			
			for(k=0;k<A[aIndex];k++)
			{
				cin>>C[cIndex++];
			}
		}
	}
	
	maXBorder(C,A,n);
	return 0;
}
