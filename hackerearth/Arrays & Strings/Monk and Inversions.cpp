#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int M[n][n],c=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>M[i][j];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int x=i;x<n;x++)
				{
					for(int y=j;y<n;y++)
					{
						if(M[x][y]<M[i][j]) c++;
					}
				}
			}		
		}
		
		cout<<c<<endl;
		
	}

	return 0;
}
