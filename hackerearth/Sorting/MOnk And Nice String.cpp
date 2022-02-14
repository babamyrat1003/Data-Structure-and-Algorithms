#include <iostream>

using namespace std;

int main() {
	int n,count,i,j;
	cin >> n;		
	string s[n];

	for(i=0;i<n;i++)
	{
		cin>>s[i];
		count=0;
		
		for(j=0;j<i;j++)
		{
			if(s[j]<s[i])count++;
		}
		cout<<count<<endl;
	}
	

}


