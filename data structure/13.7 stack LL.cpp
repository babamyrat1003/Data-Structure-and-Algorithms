#include<iostream>
#include <cstdlib>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
}*top=NULL;

void push(int x)
{
	Node *t = new Node;
	if(t==NULL)
		cout<<"Stack is overflow";
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop()
{
	Node *p;
	int x=-1;

	if(top==NULL)
		cout<<"stack is empty";
	else
	{
		p=top;
		top=top->next;
		x=p->data;
		free(p);
	}
	return x;
}

void display()
{
	struct Node *p;
	p=top;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main()
{
	push(10);
	push(20);
	push(30);
	display();
	pop();
	display();
}
