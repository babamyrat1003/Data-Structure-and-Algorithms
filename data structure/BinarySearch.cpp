#include <iostream>
using namespace std;

int binSearch(int elements[15], int n, int key)
{
	int l=1; int h=n; int mid=0;
	
	while(l <= h)
	{
		mid = (l+h)/2;
		
		if(key == elements[mid])	 return mid;
		if(key < elements[mid])  h = mid-1;
		else l=mid+1; 			
	}	
	
	return 0;
}

// Recursive Binary Search

int RBinSearch(int a[15], int l, int h, int key)
{
	int mid = 0;
	
	if(l==h)
	{
		if(a[l]==key)
		 return l;
		else return 0;
	}
	else 
	{
		mid = (l+h)/2;
		if(key == a[mid])
			return mid;
		if(key < a[mid])
			return RBinSearch(a, l, mid-1, key);
		else 
			return RBinSearch(a, mid+1, h, key);			
	}	
}

int main(){
	
	int a[15];
	int n;
	int key;
	
	cout<<"Enter n: "; cin>>n;
	cout<<"Enter key: "; cin>>key;	
	cout<<"Enter array elements: ";
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	// Print Recursive Binary Search
	
	cout<<a[RBinSearch(a, 0, n, key)];	
}
