#include<iostream>
#define max 1000

using namespace std;

struct Array{
	int A[max];
	int size;
	int length;
};


int main()
{
	struct Array arr={{1,2,4,5,6,7,8,9,10},max,10};
	
	int sum=0;
	
	for(int i=0;i<arr.length;i++)
	{
		sum+=arr.A[i];	
	}
	int jem=(arr.length*(arr.length+1))/2;
	
	cout<<jem-sum;
}
