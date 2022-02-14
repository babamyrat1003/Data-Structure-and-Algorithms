#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
	int n,a=0;
	string S,T; 
	cin>>n>>S>>T;
	for(int i=0;i<S.size();i++)
	{
		int count=0;
		for(int j=0;j<T.size();j++)
		{
			if(i+j<S.size() and S[i+j]==T[j])
			{
			count++;
			}
			else
			{ 
				if(count>a) a=count;
				break;
			}

		}

	}

		cout<<n-a;

}
