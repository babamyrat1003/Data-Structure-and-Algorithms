#include<bits/stdc++.h>
#include<string>  
#include<iostream>
#include <sstream>

using namespace std;

int countDigit(long long n)
{
	int c=0;
	while(n--)
	{
		c++;
		n=n/10;
	}
	
	return c;
}

long long initialDigit(int n)
{
	long long m=1;
	
	while(n--)m=m*10;
	
	return m/10;
}


int sumDigits(long long n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;	
	}	
	return sum;
}

bool disinctDigits(long long n)
{
	ostringstream str1;
	str1 << n;
	string s = str1.str();
	bool flag = false;
	
	for(int i=0;i<s.length();i++)
	{
		if (s[i]=='0')
		{
			flag = false;
			break;			
		}
		else
		{
			for(int j=i+1;j<s.length();j++)
			{
				if(s[i]==s[j])
				{
					flag = false;
					break;
				}
				if(s[i]!=s[j])
				{
					flag = true;
				}
			}
			if(!flag)break;
		}
	
	}

	
	return flag;
}

int main()
{
	
		int b,k;
		cin>>b>>k;
	
		long long init = initialDigit(k);
		int i_i;
		bool flag = false;
		
		if(k==9)
		{
			cout<<-1<<endl;
		}
		else if(k==1)
		{
			cout<<b<<endl;
		}
		else if(k>1)
		{
			for(long long i=init;i<init*10;i++)
			{
			
				if(disinctDigits(i))
				{
					long long ii=i,iii=i;
					
					while(countDigit(iii)>1)
					{
						iii= sumDigits(iii);
						if(sumDigits(iii)==b)
						{
							i_i=i;
							flag=true;
							break;
						}
						if(sumDigits(iii)!=b)
						{					
							flag=false;
						} 
					}
				}			
				if(flag)break;
				
			}
			if(flag)cout<<i_i<<endl;
			else cout<<-1<<endl;
		}

}
