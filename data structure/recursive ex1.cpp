#include<iostream>
using namespace std;

//void  funcB(int n);
//
//void  funcA(int n)
//{
//	if(n>0)
//	{	
//		printf("% d", n);
//		funcB(n-1);		 
//	}		
//}
//
//void  funcB(int n)
//{
//	if(n>1)
//	{	
//		printf("% d", n);
//		funcA(n/2);		 
//	}		
//}


int funcNested(int n)
{
	if(n>100)
		return n-10;
	else 
		return funcNested(funcNested(n+11));
}

int sum(int n)
{
	return n*(n+1)/2;
}


double taylor(int m, int n)
{
	static double p=1, f=1;
	double r;
	
	if(n==0)
		return 1;
	else
	{
		r=taylor(m, n-1);
		p=p*m;
		f=f*n;
		return r+p/f;
	}	
	
}

int main()
{
	int x,n;
	//	cin>>x>>n;
	//cout<<	funcNested(x);
	cout<<taylor(3,10);
	
	return 0;
}
