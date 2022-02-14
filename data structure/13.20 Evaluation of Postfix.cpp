#include<iostream>
#include <cstdlib>
#include<strings.h>

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

int isOperand(int x)
{
	if(x=='+' || x=='-' || x=='*' || x=='/')
		return 0;
	else 
		return 1;
}

int pre(int x)
{
	if(x=='+' || x=='-')
		return 1;
	else if (x=='*' || x=='/')
	 return 2;
	
	return 0;
}

int Eval(char *postfix)
{
	int i=0;
	int x1,x2,r=0 ;
	
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isOperand(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		else
		{
			x2=pop();x1=pop();
			
			switch(postfix[i])
			{
				case '+':r=x1+x2; break;
				case '-':r=x1-x2; break;
				case '*':r=x1*x2; break;
				case '/':r=x1/x2; break;
			}
			push(r);
		}
	}
	return top->data;
}

int main()
{
	char *postfix="234*+82/-";
	
	cout<<Eval(postfix);
		
	return 0;
}
