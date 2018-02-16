#include<iostream>
#include<climits>
using namespace std;

class stack
{
    int *arr;   
    int *top;   
    int *next;  
      int size1;          
    int size2;
    int free; 
public:

    stack(int size2, int size1);
 
    
    int isFull()   
    {
    	if(free==-1)
		 	{
		 		return 1;
		 	}
		 		else
		 		{
				 
		 		return 0;
			 }
	}
 
    
    void push(int data, int j);
 
    
    int pop(int j);
 
    
    int isEmpty(int j) 
    {
    		if(top[j]==-1)
		 	{
		 		return 1;
		 	}
		 		else
		 		{
				 
		 		return 0;
			 }
	}
};
 

stack::stack(int k, int n)
{
    
    size2 = k, size1 = n;
    arr = new int[size1];
    top = new int[size2];
    next = new int[size1];
 
    
    for (int i = 0; i < size2; i++)
        top[i] = -1;
 
    
        free = 0;
    for (int i=0; i<size1-1; i++)
        next[i] = i+1;
    next[size1-1] = -1;  
   
}
 

void stack::push(int data, int j)
{
    
    if (isFull())
    {
        cout << "Stack is full";
        
    }
 
   else
   {
   int i = free;      
    free = next[i];
 
    
    next[i] = top[j];
    top[j] = i;
 
    
    arr[i] = data;
    
}
}
 

int stack::pop(int j)
{
   
    if (isEmpty(j))
    {
         cout << "Stack is empty";
        
    }
 
 else
 {
 
    
    int i = top[j];
 
    top[j] = next[i];  
    next[i] = free;
    free = i;
 
  
    return arr[i];
}
}
 

int main()
{
    
    int size1 = 3, size2 = 10;
    stack obj(size1, size2);
 
    
    obj.push(15, 2);
    obj.push(45, 2);
 
    
    obj.push(17, 1);
    obj.push(49, 1);
    obj.push(39, 1);
 
    
    obj.push(11, 0);
    obj.push(9, 0);
    obj.push(7, 0);
 
    cout << "Popped element from stack 2 is " << obj.pop(2) << endl;
    cout << "Popped element from stack 1 is " << obj.pop(1) << endl;
    cout << "Popped element from stack 0 is " << obj.pop(0) << endl;
 
    
}

