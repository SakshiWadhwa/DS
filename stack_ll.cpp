#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
class stack{
	node* head;
	 public: 
	   stack()
	   {
	   	head==NULL;
	   }
	   void push(int data){
	   	
	   	
	   	node* newnode=new node;
	   	newnode->data=data;
	   	newnode->next=head;
	   	head=newnode;
	   }
	   int pop(){
	   	if(head==NULL){
	   		cout<<"stack is empty";
		   }
		   else
		   {
		   	node* temp=head;
		   	head=head->next;
		   	int t=temp->data;
		   	delete temp;
		   	temp=NULL;return t;
		   }
	   }
		 
};
int main()
{
	stack s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	int y=s.pop();
	cout<<y<<endl;
}
