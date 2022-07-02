#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n,value=1,sum=0,i,j,z;
	cin>>n;
	while(true)
	{
		i=n/value;j=(n/(value+1))+1;
		if(i==j)
		break;
		sum+=(i-j+1)*value;
		value++;
	}
	z=n/value;
	while(z--)
	{
		sum+=n/(z+1);
	}
	cout<<sum<<endl;
}

return 0;

}
