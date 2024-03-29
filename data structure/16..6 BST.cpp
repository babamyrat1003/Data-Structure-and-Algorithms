#include<iostream>
#include <cstdlib>

using namespace std;

struct Node
{
	struct Node *lchild;
	int data;
	struct Node *rchild;
	
} *root=NULL;

void Insert(int key)
{
	struct Node *t=root;
	struct Node *r=NULL, *p;
	
	if(root==NULL)
	{
		p=(struct Node *)malloc(sizeof(struct Node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;	
	}
	
	while(t!=NULL)
	{
		r=t;
			if(key<t->data)
			 t=t->lchild;
			else if(key>t->data)
		  	 t=t->rchild;
		  	else 
		  		return;
	}
	
	p=(struct Node *)malloc(sizeof(struct Node));
	p->data=key;
	p->lchild=p->rchild=NULL;
	if(key<r->data)
		r->lchild=p;
	else
		r->rchild=p;		
}

void InOrder(struct Node *p)
{
	if(p)
	{
		InOrder(p->lchild);
		cout<<p->data<<' ';
		InOrder(p->rchild);
	}
}

struct Node *Search(int key)
{
	struct Node *t=root;
	while(t!=NULL)
	{
		if(key==t->data)
			return t;
		else if(key<t->data)
			t=t->lchild;
		else 
			t=t->rchild;
	}	
	return NULL;
}

int main()
{
	struct Node *temp;
	
	Insert(50);
	Insert(10);
	Insert(40);
	InOrder(root);
	
	printf("\n");
	
	temp=Search(10);
	
	if(temp!=NULL)
		printf("element %d is found\n",temp->data);
	else
		printf("element is not found\n");
}
