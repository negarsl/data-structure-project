#include<iostream>
using namespace std;

struct Node
{
	public:
		int data;
		Node * next;
		
		Node(int val):data(val),next(nullptr){
		}
};

void InsertAtBegin(Node*& first,int value)
{
	Node* p = new Node(value);
	p->data=value;
	p->next=nullptr;
	
	if(first == nullptr)
	{
		first = p;
	}
	else
	{
		p->next=first;
	    first = p;
	}
}

void InsertAtEnd(Node*& first,int value)
{
	Node *p=new Node(value);
	p->data=value;
	p->next = nullptr;
	if(first == nullptr)
	{
		first = p;
	}
	else
	{
		Node * q= first;
		while(q->next != nullptr)
		{
			q=q->next;
		}
		q->next = p;
	}
}

void display(Node * first)
{
	Node* a = first;
	while(a != nullptr)
	{
		cout<<a->data<<"->";
		a=a->next;
	}
	cout<<"null"<<endl;
}

void UpdateNode(Node *& first,int value,int index)
{
	Node* p = new Node(value);
	p->data=value;
	p->next=nullptr;
	
	Node * q= first;
	int i=0;
	while(i<=index)
	{
		i++;
		if(index == 0)
		{
			p->next = first->next;
			first = p;
		}
		else if(i == index)
		{
			q->data=p->data;
		}
		q=q->next;
	}
}

void InsertAtIndex(Node*& first,int value,int index)
{
	Node* p = new Node(value);
	p->data=value;
	p->next=nullptr;
	
	Node * q= first;
	int j=0;
	while(j<=index)
	{
		j++;
		if(index == 0)
		{
			p->next = first;
			first = p;
		}
		else if(j == index)
		{
			p->next = q->next;
			q->next = p;
		}
		q = q->next;
	}
}

void RemoveNodeAtIndex(Node*& first,int index)
{
	Node *r=first;
	Node *a=first;
	int n=0;
	while(n<=index)
	{
		n++;
		r=r->next;
		if(index == 0)
		{
			cout<<first->data<<endl;
			first->data=r->data;
			first->next = r->next;
		//	delete first;
			return;
		}
		else if(n == index)
		{
			cout<<a->data<<endl;
			a->next = r->next;
			a->data = r->data;
			//delete r;  for evacuating the memory we need to use (delete) methode
			//but when I used it the programm ran for infinity which is a big bug
			
			return;
		}
		a = a->next;
	}
}

void RemoveNodeAtEnd(Node*& first)
{
	Node * d=first;
	Node * x=first;
	while(d != nullptr && x!=nullptr)
	{
		d = d->next;
		if(d->next == nullptr)
	    {
	    	cout<<d->data<<endl;
	    	x->next = nullptr;
	    }
	    x=x->next;
	}
}
void RemoveNodeAtBegin(Node*& first)//????? ?? ????? ?? first ??? ?? ???? ????? ?? ?????? ?? ????? ????? ???? ?? ????? ???? ?? ??? ?????.
{
	cout<<first->data<<endl;
	first = first->next;
}

void SizeOfList(Node*& first)
{
	int num=0;
	Node *z=first;
	while(z!=nullptr)
	{
		num++;
		z=z->next;
	}
	cout<<num;
}

void Concatenate(Node*& first,Node*& linkedlist)
 {
	Node*q=first;
	if(first == nullptr)
	{
		first = linkedlist;
	}
	else
	{
		while(q->next != nullptr)
		{
			q=q->next;
		}
		q->next = linkedlist;
	}
}

void invert(Node *& first)
{
	if(first == nullptr)
	{
		return;
	}
	
	invert(first->next);
	cout<<first->data<<"->";
}
int main()
{
	int size,m=0,enter;
	Node * first = nullptr;
	InsertAtBegin(first,90);
	InsertAtBegin(first,46);
	InsertAtBegin(first,1);
	InsertAtEnd(first,45);
//	display(first);
	//UpdateNode(first,78,0);
//	InsertAtIndex(first,99990,2);
//	display(first);
	RemoveNodeAtIndex(first,0);
	//RemoveNodeAtEnd(first);
	RemoveNodeAtBegin(first);
	display(first);
	SizeOfList( first);
	
	cout<<endl<<"Please enter size of your linked_list :";
	Node *head=nullptr;
	cin>> size;
	
	
	while(m<size)
	{
		m++;
		cin>>enter;
		InsertAtEnd(head,enter);
	}
	//display(head);
	
	Concatenate(first,head);
	//display(first);
	invert(first);
	cout<<"null";
}