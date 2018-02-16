#include<iostream>
using namespace std;

int front = -1;
int rear = -1;
int arr[50] = {0};

void enqueue(int a)
{
	rear++;
	arr[rear]= a;
	

}
void dequeue()
{
	front++;
	while(front != rear+1)
	{
	
	    cout<<arr[front]<<" ";
	    front++;
	}
}

int main( void )
{
	int i;

	for(i = 0; i < 10; i++)
	   enqueue(i);
	   
	dequeue();
}
