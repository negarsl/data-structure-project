#include<iostream>
#include<queue>
#include<stack>

using namespace std;
queue<int> q;
int capacity;

void Enqueue(int object)
{
	if(q.size()<capacity)
	{
		q.push(object);
	}
}
void Dequeue()
{
	int x;
	x=q.front();
	q.pop();
	cout<<x<<endl;
}

void peek()
{
	int a;
	a=q.front();
	cout<<"First elemant is ="<<a<<endl;
}
void ReverseQueue()
{
	stack<int> s;
	
	while(!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
	while(!q.empty())
    {
	   	cout<<q.front()<<" ";
	   	q.pop();
    }
}

void IsEmpty()
{
	if(q.empty())
	{
		cout<<"The queue is empty."<<endl;
	}
	else
	{
		cout<<"The queue isn't empty"<<endl;
	}
}

void IsFull()
{
	if(q.size()==capacity)
	{
		cout<<"Queue is full!";
	}
	else
	{
		cout<<"Queue is not full!";
	}
}
int main()
{
	int order;
	cout<<"capacity=";
	cin>>capacity;
	cout<<endl<<"order=";
	cin>>order;
	
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	IsFull();
	IsEmpty();
	peek();
	if(order ==1)
	{
		while(!q.empty())
      	{
	    	Dequeue();
     	}
	}
	else if(order ==2)
	{
	    ReverseQueue();
	}
	IsEmpty();
	return 0;
}