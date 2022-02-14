#include<iostream>
#define max 1000

using namespace std;

int partition(int a[max], int l, int h)
{
	int pivot, i, j;
	
	pivot = a[l];
	i=l;
	j=h;
	
	while(i<j)
	{
		do
		{
			i++;
		}
		while(a[i] <= pivot);
				
		do
		{
			j--;
		}
		while(a[j] > pivot);
		
		if(i<j)
			swap(a[i], a[j]);
	}
	swap(a[l], a[j]);
	
	return j;
}

void quickSort(int a[max], int l, int h)
{
	if(l<h)
	{
		int j = partition(a, l, h);
		
		quickSort(a, l, j);
		quickSort(a, j+1, h);
	}
}

void printArray(int a[max], int r)
{
	cout<<"print array elements: "; cout<<endl;
	
	for(int i=0; i<r; i++)
	cout<<a[i]<<' '; cout<<endl;
}

int main()
{
	int a[max], n;
	
	cout<<"Enter array n length: "; 
	cin>>n; 
	cout<<endl;
	
	cout<<"Enter array: "; 
	for(int i=0; i<n; i++) cin>>a[i]; cout<<endl;
	
	printArray(a, n);
	
	quickSort(a, 0, n);
	
	printArray(a, n);	
}
