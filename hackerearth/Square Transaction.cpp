#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[t];
	
	for(int i=0;i<t;i++)cin>>a[i];
	
	int target;
	cin>>target;
	
	while(target--)
	{
		int q, i=0;
		cin>>q;
		
		int sum=0;
		while(sum<q)
		{
			sum+=a[i];
			i++;
		}
		       if(i<=t){

            cout<<i<<endl;

        }

        else{

          cout<<"-1"<<endl;

        }
	}
}
