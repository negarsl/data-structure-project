#include<iostream>
#include<stack>
using namespace std;

stack<int> first_stack,second_stack;

void Enqueue(int num)
{
    first_stack.push(num);   
}

void Dequeue()
{
	if(second_stack.empty())
	{
		while(!first_stack.empty())
		{
			second_stack.push(first_stack.top());
		    first_stack.pop();
		}	
	}
	if(second_stack.empty())
	{
		cout<<"The queue is empty!!"<<endl;
	}
	int front = second_stack.top();
	second_stack.pop();
	cout<<"deleted element is:"<<front;
}

int main()
{
	int q,p=1,number;
	cin>>q;
	
	while(p<=q)
	{
		cin>>number;
		p++;
		Enqueue(number);
	}
	Dequeue();
}