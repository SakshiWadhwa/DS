#include<iostream>
#include<stdlib.h>
 
using namespace std;
 
class Stack
{
private:
    static const int size = 100;
    int *arr;
    
    int top;
public:
    Stack() { 
    
	arr = new int[size];
	top = -1; }
    int isEmpty();
    int isFull();
    int pop();
    void push(int x);
};
 

int Stack::isEmpty()
{
    if(top == -1)
        return 1;
    return 0;
}
 

int Stack::isFull()
{
    if(top == size - 1)
        return 1;
    return 0;
}
 

int Stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty";
        
    }
    int x = arr[top];
    top--;
    return x;
}
 

void Stack::push(int data)
{
    if(isFull())
    {
        cout<<"Stack is full";
       
    }
    top++;
    arr[top] = data;
}
 

class SpecialStack: public Stack
{
    Stack min;
public:
    int pop();
    void push(int x);
    int getMin();
};
 

void SpecialStack::push(int x)
{
    if(isEmpty()==1)
    {
        Stack::push(x);
        min.push(x);
    }
    else
    {
        Stack::push(x);
        int y = min.pop();
        min.push(y);
        if( x < y )
          min.push(x);
        else
          min.push(y);
    }
}
 

int SpecialStack::pop()
{
    int x = Stack::pop();
    min.pop();
    return x;
}
 

int SpecialStack::getMin()
{
    int x = min.pop();
    min.push(x);
    return x;
}

int main()
{
    SpecialStack s;
    s.push(10);
    s.push(20);
    s.push(30);
      
    cout<<s.getMin()<<endl;
    s.push(5);
    cout<<s.getMin();
    return 0;
}
