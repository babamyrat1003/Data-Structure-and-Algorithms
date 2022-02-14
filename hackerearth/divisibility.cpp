#include <iostream>

using namespace std; 

int main()
{ 

int n; 
cin>>n;
int a[n], t=n ;

while(t)
{

	cin>>a[n-t]; t--;

}

//if( a[n-1]%10==0 ) cout<<"Yes"; else cout<<"No";
cout<<a[n-1];
 

return 0;

}
