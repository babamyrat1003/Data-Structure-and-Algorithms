#include<iostream>
#define max 1000

using namespace std;

void insert(int index, int key, int arr[max], int n)
{
	for(int i=n-1; i>=index; i--)
	{
		arr[i] = arr[i-1];
	}	
	arr[index] = key;
	n++;
}

void print(int a[max], int n)
{
	cout<<"print array elements:\n";
	
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";	
}

int main()
{
	int a[10] = {2,3,4,7,8,9,14};

	insert(0, 10, a, 10);
	print(a, 10);		
}
