#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int costOfGreen,costOfPurple;
		cin>>costOfGreen>>costOfPurple;
		
		int n;
		cin>>n;
		
		int sumg=0,sump=0;
		int greenNumber=0,purpleNumber=0;
		int valueGreen,valuePurple;
		for(int i=0;i<n;i++)
		{			
			cin>>valueGreen>>valuePurple;
			
			if(valueGreen==1)greenNumber++;
		    if(valuePurple==1)purpleNumber++;
		}
		//cout<<greenNumber<<' '<<purpleNumber<<endl;
		sumg+=costOfGreen*greenNumber+costOfPurple*purpleNumber;
		sump+=costOfGreen*purpleNumber+costOfPurple*greenNumber;
		
		if(sumg>sump)cout<<sump<<endl;
		else cout<<sumg<<endl;
	}
}
