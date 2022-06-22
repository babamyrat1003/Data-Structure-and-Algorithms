#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
	 string s;
	 cin>>s;
	 
	 bool flag=true;
	 for(int i=0;i<n-1;i++)
	 {
	 	if(s[i]=='H' and s[i+1]=='H')
	 	{
	 		flag=false;
			break;	
		}	 	
	 }
	 
	 if(flag)
	 {
	 	for(int i=0;i<n;i++)
	 	{
	 		if(s[i]=='.')s[i]='B';
		 }
		  cout<<"YES"<<endl<<s;
	 }
	
	 else cout<<"NO";
	  
}
