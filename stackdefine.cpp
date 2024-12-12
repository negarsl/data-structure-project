#include<iostream>
using namespace std;

class Stack{
	private:
		int arr[8];
	    int top = -1;
	    int max = 8;
	public:
	    
	    bool IsEmpty()
		{
			return top == -1;	
		}
		
		void push(int item)
		{
		    if(top == max-1)
			{
				cout<<"stack is full!!"<<endl;
				return ;
			}	
			top++;
			arr[top]=item;
		}	
		
		void pop()
		{
		    int item;
			if(IsEmpty())
			{
				cout<<"stack is empty!!"<<endl;
			}
			item = arr[top];
			top -- ;
			cout<< item<<endl;
		}
		
		void peek()
		{
			int item;
			if(IsEmpty())
			{
				cout<<"stack is empty!!"<<endl;
			}
			item = arr[top];
			cout<< item<<endl;
		}
		
};

int main()
{
	Stack st;
	cout<<"Is stack empty?";
	if(st.IsEmpty())
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	st.push(30);
	st.push(110);
	st.push(22);
	st.push(9090);
	
	cout<<"Is stack empty?"<<(st.IsEmpty() ? "yes":"no")<<endl;
	
	st.peek();
	
	st.pop();
	st.pop();
	
	st.peek();
	cout<<"Is stack empty?"<<(st.IsEmpty() ? "yes":"no")<<endl;
	return 0;
}