#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	if(s[2]=='A' or s[2]=='E' or s[2]=='I' or s[2]=='O' or s[2]=='U'or s[2]=='Y')
	cout<<"invalid"<<endl;

	else if( 
	(
	s[0]+s[1])%2 != 0 
	
	or (s[3]+s[4])%2 != 0 
	
	or (s[4]+s[5])%2 != 0  

    or (s[7]+s[8])%2 != 0  ) {cout<<"invalid"<<endl;}
    
    else  {cout<<"valid"<<endl;	}

 	return 0;
}
