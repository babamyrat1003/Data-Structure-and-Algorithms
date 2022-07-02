#include<bits/stdc++.h>
using namespace std;

bool in_array(string value, string *array)
{
    int size = (*array).size();
    for (int i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,idx=0;
		cin>>n>>k;
		
		string s[105];
		
		while(n--)
		{
			int p;
			string str;
			cin>>p;
			
			while(p--)
			{
				cin>>str;
				if (!in_array(str, s)) s[idx++]=str;
				
			}
		}
		
		if(k==idx)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
//		for(int i=0;i<idx;i++)cout<<s[i]<<' ';
	}
}
