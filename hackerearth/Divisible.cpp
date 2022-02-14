#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int firstDigit(int n)
{
	while(n>10)
	{
		n=n/10;
	}
	return n;	
}

int lastDigit(int n)
{
	return n%10;
}

int main()
{
	int n;
	cin>>n;
	cout<<endl;
	
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	int gen=0;
	
	for(int i=0;i<n/2;i++)
	{
		gen*=10;
		gen+=firstDigit(A[i]);
	}
	
	for(int i=n/2;i<n;i++)
	{
		gen*=10;
		gen+=lastDigit(A[i]);
	}
	string st= to_string (gen);
	
	
//	if(gen%11==0cout<<"OUI";
//	else cout<<"NON";
		
}
