#include<iostream>
using namespace std;


int elman=0,size=9,empty_value=-1;
void Insert(int array[9],int in , int val)
{
	if(in<size && elman<size)
	{
		array[in]=val;
		elman++;
	}
}

int Delet_By_Value(int array[9],int value)
{
	for(int i=0;i<size;i++)
	{
		if(array[i]==value)
		{
			array[i]=empty_value;
			elman--;
			cout<<i;
		}
	}	
}
void Delet_By_Index(int array[9],int input)
{
	int i=0;
	while(i<size)
	{
		if(array[i] == input)
		{
			for(int j=i; j<size -1;j++)
			{
				array[j]=array[j+1];
			}
			size--;
		}
		else
		{
			++i;
		}
	}
}
void Display(int array[9])
{

	for(int n=0;n<size;n++)
	{
		cout<<array[n]<<" ";
	}
}
void Append(int array[9],int value)
{
	array[9]=value;
	for(int n=0;n<=9;n++)
	{
		cout<<array[n]<<" ";
	}
}

void Reverse(int array[9])
{
	int last;
	for(int q=0;q<=4;q++)
	{
	    last=array[q];
		array[q]=array[9-q-1];
		array[9-q-1]=last;
	}
	for(int q=0;q<=8;q++)
	{
	    cout<<array[q]<<" ";
	}
}
int Search_By_Value(int array[9],int Value)
{
	for(int x=0;x<9;x++)
	{
		if(Value == array[x])
		{
			cout<<x;
		}
	}
}

int main()
{
	int arr[9]={1,67,3,23,9,0,2,4,1};
	int index,value,order;
	cin>>order;
	if(order == 1)
	{
		cin>>index>>value;
	    Insert(arr,index,value);
	}
    else if(order==2)
    {
    	cin>>value;
    	Delet_By_Value(arr,value);
	}
	else if(order==3)
	{
		int inp;
		cin>>inp;
		Delet_By_Index(arr,inp);
	}
	else if(order == 4)
	{
		Display(arr);
	}
	else if(order == 5)
	{
		int number;
		cin>>number;
		Append(arr,number);
	}
	else if(order == 6)
	{
		Reverse(arr);
	}
	else if(order == 7)
	{
	    cin>>value;
		Search_By_Value(arr,value);
	}
}