
#include <iostream>

using namespace std;
int main()
{
	string s;
	cin>>s;

	int i;
	for(i=0;i<s.length();i++)
	{
		if(islower(s[i]))
		{
			s[i]=s[i]-32;			
		}			
		
		else s[i]=s[i]+32;
	}
	
	cout<<s<<endl;	
}
