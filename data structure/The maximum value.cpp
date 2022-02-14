#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int n)
{
    if(n<=1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
  
    return true;
}


int  coprime(int n)
{
	int i=1,k=0;
	if(isprime(n))
	{
		return n-1;
	}
	else
	{
		while(i<n)
		{
			if(n%i==0)
				k=i;
			i++;
		}	
	  	return k-1;
	}

}


int main() {
	int n;
	cin>>n;
	cout<<coprime(n);
	
	
	return 0;
	
}



