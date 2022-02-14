#include<iostream>
#include <limits.h>
#include <cstdlib>

using namespace std;


int findMax(int A[],int n)
{
	int max=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	return max;
}


void countSort(int A[], int n)
{
	int max, i,j;
	int *c;
	max=findMax(A,n);
	
	c= new int [max+1];	
	c=(int *)malloc(sizeof(int)*(max+1));
	
	for(i=0; i<max+1; i++)
		c[i]=0;
	
	for(i=0;i<n;i++)
		c[A[i]]++;
		
	i=0;j=0;
	
	while(j<max+1)
	{
		if(c[j]>0)
		{
			A[i+1]=j;
			c[j]--;			
		}
		else 
			j++;
	}
}

int main()
{
	int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

	countSort(A,10);
	for(i=0;i<10;i++)
		printf("%d ",A[i]);
	printf("\n");
	
return 0;
}
