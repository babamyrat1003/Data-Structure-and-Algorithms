#include <iostream>
using namespace std;
int main() {
	long long  n;
	cin>>n;
	
	long long w,h,c=0;
	
	double x,y;
	while(n--)
	{
		cin>>w>>h;
		
		x = (double)w/h;
		y = (double)h/w;
		
		if(x>=1.6 && x<=1.7)c++;
		if(y<=1.7 && y>=1.6)c++;
		
		
	}
	
	cout<<c;
	
	
	
	
}
