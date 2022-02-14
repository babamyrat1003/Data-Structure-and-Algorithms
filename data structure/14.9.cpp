#include<iostream>
#include <cstdlib>
using namespace std;

struct Queue
{
	int size;
	int front;
	int rear;
	int *Q;	
};

void create(struct Queue *q, int size)
{
	q->size=size;
	q->rear=q->front=-1;
	q->Q=(int *)malloc(q->size*sizeof( int ));
}

void enqueue(struct Queue *q, int x)
{
	if((q->rear+1)%q->size==q->front)
		cout<<"Queue is full";
	else
	{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}

int dequeue(struct Queue *q )
{
	int x=-1;
	if(q->rear==q->front)
		cout<<"Queue is Empty";
	else
	{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];		
	}
	
	return x;
}

void display(struct Queue q)
{
	int i=q.front+1;
	
	do
	{
		printf("%d ",q.Q[i]);
		i=(i+1)%q.size;
	}
	while(i!=(q.rear+1)%q.size);
	cout<<endl;
}

int main()
{
	struct Queue q;
	create(&q,7);
	
	enqueue(&q,4);
	enqueue(&q,5);
	enqueue(&q,6);
	enqueue(&q,7);
	enqueue(&q,8);
	enqueue(&q,9);
	dequeue(&q);
	display(q);
	
		
}
