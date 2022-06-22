#include<iostream>
using namespace std;

int digitSum(int a)
{
	int sum=0;
	while(a>0)
	{
		sum+=a%10;
		a=a/10;
	}
	
	return sum;
}

int main()
{
	 int t;
	 cin>>t;
	 
	 while(t--)
	 {
		int a;
		cin>>a;
		
		int out_;
		while(a>0)
		{
			out_ = digitSum(a);
			
			if(out_%4==0)break;
			else a++;
		}
		cout<<a<<endl;
	 }	
}
