#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
class queue{
	node* front;
	node* rear;
	 public:
	    queue()
	   {
	   	front=NULL;
	   	rear=NULL;
	   }
	   void enqueue(int data){
	   	
	   	
	   	node* newnode=new node;
	   	 if(newnode==NULL)
	   	 {
	   	 	cout<<"queue is full"<<endl;
			}
			else
			{
			
	   	newnode->data=data;
	   	newnode->next=NULL;
	   	if(rear==NULL)
	   	{cout<<"hello"<<endl;
	   		rear=newnode;
	   		front=newnode;
		   }
		   else
		   {
		   	rear->next=newnode;
		   }
	   	
	   } 
}
	   
	   int dequeue(){
	   	if(front==NULL){
	   		cout<<"queue is empty"<<endl;
	}
		   else if(front==rear)
		   {
		   	int t=front->data;
		   node* temp=rear;
		   rear=front=NULL;
		   delete temp;
		   temp=NULL;
		   return t;
		   }
		   else
		   {
		   int t=front->data;
		   node* temp=front;
		   front=front->next;
		   delete temp;
		   temp=NULL;
		   return t;
		   }
	
}

};
int main()
{
	queue obj;
	obj.enqueue(1);
	obj.enqueue(2);
	obj.enqueue(3);
	obj.enqueue(4);
    obj.enqueue(5);
	cout<<obj.dequeue();
	//cout<<obj.dequeue();
	

}
