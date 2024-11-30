#include<iostream>
#include<stack>
using namespace std;

class CircularQueue
{
	private:
		int rear,front,*queue,capacity,size;
	public:
		CircularQueue(int capacity)
		{
			size = capacity;
			queue = new int[size];
			rear=front=-1;
		}
		bool isEmpty()
		{
			return front==-1;
		}
		bool isFull()
		{
			return (rear+1)%size == front;
		}
		void Enqueue(int object)
{
	
	cin>>object;
	rear = (rear+1)%size;
	if(front == (rear+1)%size)
	{
		cout<<"Queue is full.";
		return;
	}
	queue[rear]=object;
}

void Dequeue()
{
	int x;
	if(rear == front)
	{
		cout<<"Queue is empty";
		return ;
	}
	front=(front+1)%size;
	x=queue[front];
	cout<< x;
}

void Peek()
{
	if(rear == front)
	{
		cout<<"the first elemant of queue deleted";
	}
	else
	{
		cout<<queue[0]<<endl;
	}
}

void ReverseQueue()
{
	stack<int>s;
	
	int i = front;
	while(i!=rear)
	{
		s.push(queue[i]);
		i=(i+1)%size;
	}
	s.push(queue[rear]);
	
	i=front;
	while(!s.empty())
	{
		queue[i]=s.top();
		s.pop();
		i=(i+1)%size;
	}
}
};




int main()
{
	int x,order,capacity;
	
	cout<<"Enter your order:";
	cin>>order;
	cout<<endl<<"enter the capacity";
	cin>>capacity;
	if(order==1)
	{
		cin>>x;
		CircularQueue.Enqueue(x);
	}
	else if(order==2)
	{
		CircularQueue.Peek();
	}
	else if(order==3)
	{
		CircularQueue.Dequeue();
	}
	else if(order == 4)
	{
		CircularQueue.ReverseQueue();
	}	
}