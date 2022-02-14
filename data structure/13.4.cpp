#include<iostream>
#include <cstdlib>
using namespace std;

struct Stack
{
	int Top;
	int size;
	int *s;
};

void create(struct Stack *st)
{
	cout<<"Enter Stack size:\n";
	cin>>st->size;
	st->Top=-1;
	st->s = (int *)malloc(st->size*sizeof(int));
}

void display(struct Stack st)
{
	cout<<"Print Stack:\n";
	for(int i=st.Top;i>=0;i--)
	{
		cout<<st.s[i]<<" ";
	}
	
	cout<<"\n";
}

void push(struct Stack *st, int x )
{
	if(st->Top==st->size-1)
		cout<<"Stack overflow";
	else 
		{
			st->Top++;
			st->s[st->Top] = x;
		}
}

int pop(struct Stack *st)
{
	int x=-1;
	if(st->Top==-1)
		cout<<"stack is empty";
	else
	{
		x = st->s[st->Top];
		st->Top--;
	}
	return x;
}


int peek(struct Stack st, int pos)
{
	int x = -1;
	if(st.Top-pos+1 > 0)
		cout<<"Invalid Position";
	else
		x = st.s[st.Top-pos+1];		
	return x;	
	
}

int main()
{
	struct Stack st;
	
	create(&st);
	push(&st,4);
	push(&st,6);
	push(&st,8);
	display(st);	
	//pop(&st);
	//display(st);
	cout<<peek(st,4);
	
}
