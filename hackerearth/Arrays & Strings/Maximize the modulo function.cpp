#include<bits/stdc++.h>
#define ll long long

using namespace std;

string Del(string st,ll n,ll l)
{
	ll i;
	string s="";
	if(l==0)
	{			
		for(i=0;i<st.length();i++)
		{
			s+=st[i];	
		}	
	}
	else
	{
		for(i=0;i<st.length();i++)
		{
			if(i!=n) 	s+=st[i];	
		}
	}
	
	return s;	
}

ll Calculate(string s,ll k,int l)
{
	ll i, sum=0;
	if(l==0)
	{
		for(i=0;i<s.length();i++)
		{
			sum =sum*10+(s[i]-48);			
		}
		
		sum=sum%k;
		
		return sum;
	}
	else 
	{
		for(i=0;i<s.length();i++)
		{
			sum +=int(s[i]-48)%k;			
		}	
		
		sum=sum%k;
		
		return sum;
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		
		string s,s1;
		cin>>s;
		
		ll i,max,num;
		
		max=Calculate(s,k,0);
		
		for(i=0;i<s.length();i++)
		{
			s1=Del(s,i,1);
			//cout<<s1<<endl;	
			if(max<Calculate(s1,k,1)) max=Calculate(s1,k,1);	
		}
		
		cout<<max<<endl;	
	}
	
	return 0;
	
}


//#include<bits/stdc++.h>
//#define ll long long
//
//using namespace std;
//
//int Del(string st,ll n,ll l)
//{
//	ll i,v=0;
//	if(l==0)
//	{			
//		for(i=0;i<st.length();i++)
//		{
//			v=v*10+int(st[i]-48);	
//		}	
//	}
//	else
//	{
//		for(i=0;i<st.length();i++)
//		{
//			if(i!=n) v=v*10+int(st[i]-48);	
//		}
//	}
//	
//	return v;	
//}
//
//int main()
//{
//	int t;
//	cin>>t;
//	
//	while(t--)
//	{
//		ll n,k;
//		cin>>n>>k;
//		
//		string s;
//		cin>>s;
//		
//		ll i,max,num;
//		
//		max=Del(s,0,0)%k;
//		
//		for(i=0;i<s.length();i++)
//		{
//			num = Del(s,i,1);	
//			if(max<num%k) max=num%k;	
//		}
//		
//		cout<<max<<endl;	
//	}	
//	
//	return 0;
//	
//}
