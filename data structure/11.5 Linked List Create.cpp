#include<iostream>
#include <cstdlib>

using namespace std;

struct Node
{
 	int data;
	struct Node *next; 	
}*first=NULL;

void create(int A[], int n)
{
	int i;
	struct Node *t, *last;
	
	first=(struct Node * )malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1; i<n; i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void Display(struct Node *p)
{
	cout<<"Print List:\n";
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;	
	}
}

void RDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		RDisplay(p->next);
		cout<<p->data<<" ";
	}
}

int Sum(struct Node *p)
{
	int sum=0;
	
	while(p!=NULL)
	{
		sum+=p->data;
		p=p->next;	
	}	
	
	return sum;
}

int count(struct Node *p)
{
	int c=0;
	
	while(p!=NULL)
	{
		c++;
		p=p->next;	
	}	
	
	return c;
}

int RSum(struct Node *p)
{
	if(p==0)
		return 0;
	else	
		return RSum(p->next)+p->data;	
		
}

int max(struct Node *p)
{
	int m = -32768, MIN_INT;
	while(p!=NULL)
	{
		if(p->data>m)
			m=p->data;
		p=p->next;
	}
	
	return m;
}

int RMax(struct Node *p)
{
	int m=0, MIN_INT = -32768;
	if(p==0)
		return MIN_INT;
	else 
		{
			m=RMax(p->next)
			;if(m>p->data)
				return m;
			else 
			 	return p->data;
		}
}

struct Node * LSearch(struct Node *p,int key)
{
	struct Node *q;
	while(p!=NULL)
	{
		if(key==p->data)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}

struct Node * RSearch(struct Node *p,int key)
{
	if(p==NULL)
		return NULL;
	if(key==p->data)
		return p;
	return RSearch(p->next,key);
}


void Insert(struct Node *p,int index,int x)
{
	struct Node *t;
	int i;
	if(index < 0 || index > count(p))
		return;
		
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=x;
	
	if(index == 0)
	{
		t->next=first;
		first=t;
	}
	else
	{
		for(i=0;i<index-1;i++)
		p=p->next;
		t->next=p->next;
		p->next=t;
	}
}

int main(){
	
	struct Node *temp;
	int A[]={25,5,7,4};
	
	create(A,4);
	
	//Display(first);
	//RDisplay(first);
	//cout<<RSum(first);
	//cout<<max(first);
	//cout<<RMax(first);
	//	temp=LSearch(first, 7);
	//	cout<<temp->data;

	Insert(first,4,2);
	Display(first);
	return 0;
}
