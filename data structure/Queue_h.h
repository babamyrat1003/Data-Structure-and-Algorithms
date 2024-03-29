#ifndef Queue_h
#define Queue_h
#include <cstdlib>
#include<iostream>

struct Node 
{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
 
struct Queue
{
	int size;
	int front;
	int rear;
	Node **Q;	
};

void create(struct Queue *q, int size)
{
	q->size=size;
	q->rear=q->front=-1;
	q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}

void enqueue(struct Queue *q, Node * x)
{
	if((q->rear+1)%q->size==q->front)
		std::cout<<"Queue is full";
	else
	{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}

Node * dequeue(struct Queue *q )
{
	Node* x=NULL;
	if(q->rear==q->front)
			std::cout<<"Queue is Empty";
	else
	{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];		
	}
	
	return x;
}

int isEmpty(struct Queue q)
{
	return q.front==q.rear;
}

#endif
