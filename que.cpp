#include<iostream>
using namespace std;
class queue{
	int *a;
	int front;
	int rear;
	int size;
	//int data;
	public:
		  queue()
		  {
		  	cin>>size;
		  	a=new int[size];
		  	for(int i=0;i<size;i++)
		  	{
		  		a[i]=0;
			  }
			  front=-1;
			  rear=-1;
		  }
		 /* int isempty()
		  {
		  	if(rear==-1)
		  	{
		  		return 1;
		  	
		  }
		  else 
		  {
		  	return 0;
		  }
	}
		  int isfull()
		  {
		  	if(rear==size-1)
		  	{
		  	return 1;	
		  		}
		  		else
		  		{
		  			return 0;
				  }
		  }*/
		  void enqueue(int data)
		  {
		  	if((rear+1)%size==front)
			  {
			  	cout<<"queue is full"<<endl;
			  }
			  else
			  {
			  	rear=(rear+1)%size;
			  	a[rear]=data;
			  	if(front==-1)
			  	{
			  		front=rear;
				  }
			  }
		  }
		  int dequeue()
		  {
		  	if(front==-1)
		  	{
		  	cout<<"queue is empty";
		}
			  else if(front==rear)
			  {
			  	int t=a[front];
			  	front=rear=-1;
			  	return t;
			  }
			  else
			  
			  {int t=a[front];
			  	front=(front+1)%size;
			  }
		}
			
		  
};
int main()
{queue obj;
	obj.enqueue(1);
	obj.enqueue(2);
	obj.enqueue(3);
	obj.enqueue(4);
	obj.enqueue(5);
	obj.enqueue(6);
obj.dequeue();
	//cout<<y;
}
