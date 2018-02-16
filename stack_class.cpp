#include<iostream>
using namespace std;

class stack{
	public:
		int top ;
		int *arr;
		int size;
		
		stack()
		{
			int i;
			
			top = -1;
			cout<<"enter stack size"<<endl;
			cin>>size;
			
			arr = new int[size];
			for(i = 0 ; i < size; i++)
			   arr[i] = 0;
			   
			top = -1;
		}
		
		int empty()
		{
			if(top == -1)
			return 1;
			else
			return 0;
		}
		
		int full()
		{
			if(top == size-1)
			return 1;
			else
			return 0;
		}
		
		void push(int a)
		{
			if(full())
			cout<<"stack is full"<<endl;
			else
			{
				top = top + 1;
				arr[top] = a;
			}
	
	   }
		int pop()
		{
			if(empty())
			cout<<"stack is empty"<<endl;
			
			else
			{
				return arr[top];
				top = top - 1;
				
			}
		}
		
		void display()
		{
			while(!empty())
			{
				cout<<arr[top]<<endl;
				top = top - 1;
				
			}
		}
};

int main()
{
	stack obj;
	int i;
	for( i = 0; i < 10; i++)
	    obj.push(i);
	    
	int t;
	
	//t = obj.pop();
	cout<<"popped element: "<<endl;
	
	obj.display();
}
