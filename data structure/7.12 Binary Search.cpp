#include<iostream>
#define max 1000

using namespace std;

struct Array 
{
	int A[max];
	int size;
	int length;
};

int BinSearch(struct Array arr, int key)
{
	int mid, l, h;
	l=0;
	h=arr.length-1;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
			return mid;
		else if (key < arr.A[mid])
			h=mid-1;
		else 
			l=mid+1;
	}	
	return -1;	
}

int RBinSearch(int a[max], int l, int h, int key)
{
	int mid=0;
	
	if(l<=h)
	{
		mid = (l+h)/2;
		if(key==a[mid])
			return mid;
		else if (key<a[mid])
			return RBinSearch(a, l, mid-1, key);
		else
			return RBinSearch(a, mid+1, h, key);			
	}
	
	return -1;
}

void PrintArray(struct Array arr)
{
	cout<<"Array elements"<<"\n";
	
	for(int i=0; i<arr.length; i++)
		cout<<arr.A[i]<<" ";
	
		cout<<"\n";
}

int main()
{
	struct Array arr={{2, 4, 15, 6, 18, 22, 98}, max, 7	};
	cout<<RBinSearch(arr.A,0,arr.length,22)<<"\n";
	PrintArray(arr);
	
}
