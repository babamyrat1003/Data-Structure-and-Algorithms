#include<bits/stdc++.h>
using namespace std;
int product(int n)
{
    int p=1;
    while(n>0)
    {
	    if(n%10==1)
     	{
		 n=n/10;
         p=0;
         continue;
        }
        p*=n%10;
        n=n/10;
    }
    return p;
}
int main()
{
   int n,sum=0;
   cin>>n;

   for( int i=0;i<1000000;i++)
   {
        int x=product(i);
        if(x==n)
        {
			sum++;
        }
    }
    cout<<sum;

}


