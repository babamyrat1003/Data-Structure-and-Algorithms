#include<iostream>
#define max 1000

using namespace std;

//define maxx
//const int maxx = 1000;

void merge(int a[max], int b[max], int m, int n)
{
	int i=0; int j=0; int k=0; int c[max];
	
	while(i<m && j<n)
	{
		if(a[i]<b[j])		
			c[k++] = a[i++];
			
		else 		
			c[k++] = b[j++];			
	}	
	
	// insert remaing elements into array
	 
	for( ; i<m; i++)
		c[k++] = a[i];
		
	for( ; j<n; j++)
		c[k++] = b[j];
			
	// a array elements before merging
		for(int h=0; h<i; h++)
	 		cout<<a[h]<<" "; cout<<endl;
	 		
	// n array elements before merging		
		for(int h=0; h<j; h++)
	 		cout<<b[h]<<" "; cout<<endl;
	 		
	// print merged elements 	
	cout<<"Print merged elements: "; cout<<endl;
	
	for(int h=0; h<m+n; h++)
	 cout<<c[h]<<" "; cout<<endl;
	 
}


int main()
{
		int a[max]; int b[max]; int m; int n;
		
		cout<<"Enter m length of array:  "; cin>>m;	cout<<endl;
		cout<<"Enter n length of array:  "; cin>>n;	cout<<endl;
		
		cout<<"Enter a array elements: ";
		for(int i=0; i<m; i++) cin>>a[i]; cout<<endl;
		
		cout<<"Enter b array elements: ";
		for(int i=0; i<n; i++) cin>>b[i]; cout<<endl;
		
		merge(a, b, m, n);
}

