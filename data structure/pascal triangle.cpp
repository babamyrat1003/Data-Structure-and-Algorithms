#include<iostream>

using namespace std;

int nCr(int n, int r)
{
	if(r==0 or n==r)
	 	return 1;
	else
	{
		return nCr(n-1, r-1) + nCr(n-1, r);
	}
}

void printPascal(int n)
{

	for(int line=0; line<n; line++)
	{
		for(int i=0; i<=line;i++)
		
			cout<<nCr(line, i)<<" ";
			
			cout<<endl;		
	}
}

int main()
{
		printPascal(7);
	return 0;
	
}
