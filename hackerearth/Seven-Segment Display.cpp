#include <iostream>
using namespace std;
void segments(int n)
{
	// Condition to check base case
	if (n == 1 || n == 0) {
		return;
	}
	// Condition to check if the
	// number is even
	if (n % 2 == 0) {
		cout << "1";
		segments(n - 2);
	}
	
	// Condition to check if the
	// number is odd
	else if (n % 2 == 1) {

		cout << "7";
		segments(n - 3);
	}
}

int main()
{
	int t;
	cin>>t;
	
	int a[10];
		a[0]=6;
		a[1]=2;
		a[2]=5;
		a[3]=5;
		a[4]=4;
		a[5]=5;
		a[6]=6;
		a[7]=3;
		a[8]=7;
		a[9]=6;
		
	while(t--)
	{
		int n;
		cin>>n;
		
		if(n<10)
		{
			segments(a[n]);cout<<endl;	
		}
		if(n>=10)
		{
			int c=0;
			while(n>0)
			{
				c+=a[n%10];
				n=n/10;
			}
			segments(c);cout<<endl;	
		}
			
	}

}

