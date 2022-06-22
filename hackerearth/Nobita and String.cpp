#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	string s;
	
	int n=2;
	
	cout<<" > ";
	
	cin>>n;
	
	for(int i=0; i<=n; i++)
	{
		getline(cin,s);
			
		cout<<s<<endl;
	}
}	
