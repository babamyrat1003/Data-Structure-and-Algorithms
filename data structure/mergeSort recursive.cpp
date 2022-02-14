#include<iostream>
#define max 1000

using namespace std;

void merge(int a[max], int l, int mid, int h)
{
	int i; 
	int j; 
	int k;
	int m = mid - l + 1;
	int n = h - mid; 
	
	//create left and right arrays
	int left[max], rigth[max];
	
	// copy elements into temp array;
	
	for(i=0; i<m; i++)
		left[i] = a[l+i];
		
	for(j=0; j<n; j++)
		rigth[j]= a[mid+1+j];	
		
	i=0;
	j=0;
	k=l;
		
	while(i<m && j<n)
	{
		if(left[i] <= rigth[j])
			a[k++] = left[i++];
		else 
			a[k++] = rigth[j++];
	}
	
	for( ; i<m; i++)
		a[k++] = left[i];
		
	for( ; j<n; j++)
	 	a[k++] = rigth[j];
}

void mergeSort(int a[max], int l, int h)
{
	if(l<h)
	{
		int mid = (l+h)/2;
		
		mergeSort(a, l, mid);
		mergeSort(a, mid+1, h);
		merge(a, l, mid, h);
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
	int a[max];
	int n;
	int l=0;
	
	cout<<"Enter array n length: "; 
	cin>>n; 
	cout<<endl;
	
	cout<<"Enter array: "; 
	for(int i=0; i<n; i++) cin>>a[i]; cout<<endl;
	
	printArray(a, n);
	
	mergeSort(a, 0, n);
	
	printArray(a, n);
		
}

