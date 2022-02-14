#include<iostream>
#include <cstdlib>
#include<strings.h>

using namespace std;

struct Node 
{
	char data;
	struct Node *next;
}*top=NULL;

void push(char x)
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

char pop()
{
	Node *p;
	char x=-1;

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

int isBalance(char *exp)
{
	int i;
	
	for(i=0;i<exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')')
		{
			if(top==NULL) 
				return 0;
			pop();
		}
	}
	
//	return top?0:1;
	 if(top==NULL) 
	 	return 1;
	else   
		return 0;
}

int isOperand(char x)
{
	if(x=='+' || x=='-' || x=='*' || x=='/')
		return 0;
	else 
		return 1;
}

int pre(char x)
{
	if(x=='+' || x=='-')
		return 1;
	else if (x=='*' || x=='/')
	 return 2;
	
	return 0;
}

char * convert(char *infix)
{
	int i=0, j=0;
	char *postfix;
	int len = strlen(infix);
	postfix=(char*)malloc((len+2)*sizeof(char));
	
	while(infix[i]!='\0')
	{
		if(isOperand(infix[i]))
			postfix[j++]=infix[i++];
		else
		{
			if(pre(infix[i])>pre(top->data))
				push(infix[i++]);
			else
				postfix[j++]=pop();
		}
	}
	
	while(top!=NULL)
		postfix[j++]=pop();
	postfix[j]='\0';
	
	return postfix;
}

int main()
{
	char *infix="a+b*c-d/e";
	push('#');
	char *postfix=convert(infix);
	
	cout<<postfix;
	
	return 0;
}
