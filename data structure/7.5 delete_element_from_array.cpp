#include<iostream>
#define max 1000

using namespace std;

void del(int index, int arr[max], int n)
{
	for(int i=index; i<n; i++)
	{
		arr[i] = arr[i+1];
	}	
		n--;
}

void print(int a[max], int n)
{
	cout<<"print array elements:\n";
	
	for(int i=0; i<n-1; i++)
		cout<<a[i]<<" ";	
}

int main()
{
	int a[10] = {2,3,4,7,8,9,14};

	del(3, a, 10);
	print(a, 10);		
}
