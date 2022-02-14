#include <bits/stdc++.h>

using namespace std;


bool comparator(string a,string b)
{
    return a<b;
}

int main() {
	string s;
	int k,i,c=0,J;
	cin>>s>>k;
	
	string st[s.size()],s1;
	int index=0;
	
	for(i=0;i<s.size();i++)
	{		
			s1="";
			for(int j=i;j<s.size();j++)
				s1+=s[j];
			st[index++]=s1;
	}
	
	sort(st,st+index,comparator);
	cout<<st[k-1];	
}

