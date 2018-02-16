// udaanazadi@gmail.com

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};
class ll{
	public:
		node* head = NULL;
		node* current = NULL;
		node* add()
		{
		    int i;
			int n;
			cout<<"enter n"<<endl;
			cin>>n;
			for(i = 0; i< n; i++)
			{
				node* nn = new node();
				cin>>nn->data;
				nn->next = NULL;
				
				if(head == NULL)
				head = nn;
				
				else
				{
					node* current = head;
					while(current->next)
					{
					
					   current = current->next;
				    }
					current->next = nn;
				}
			}
			return head;	
		}
		
		node* del(node* head, int k)
		{
			
			node* current = head;
			int count = 0;
			while( current!=NULL )
			{
				
				current = current ->next;
				count++;
			}
			//cout<<"cpunt: "<<count;
			
			int x = (count - k )+ 1;
			
			current = head;
			
			node* temp  = new node();
			//node* prev = new node();
			node* t = new node();
			
		    temp =  head->next;
		    //cout<<"head: "<<head->next->data<<endl;
			//prev = head;
			 t = head;
			 
			cout<<x<<" ";
			if(x == 1)
			{
					if(head==NULL)
					return NULL;
		
					else
					{
						t=head;
						head=head->next;
			
						delete t;
						//t=NULL;
					}
			}
			
			/*else
			{
			
			/*	int t = 1;
				while( temp )
				{
					t++;
			 		 if(t == x)
			 		 {
			  
			  			prev->next = prev->next->next;
			  			break;
			  			//temp = temp->next;
					 }
			 		 else
			 		 {
			 			 prev = prev->next;
			  			 temp = temp->next;
			 		 }
			  	
				}*/
				
				   int a=1;
					current=head;
					while(current!=NULL && a<x-1)
					{
						current=current->next;
						a++;
					}
					temp=current->next;
					current->next=temp->next;
					delete temp;
					temp=NULL;
					
					return head;
			}
			
		
		
		void print()
		{
			 current = head;
			while(current)
			{
				cout<<current->data << " ";
				current = current->next;		
			}
				
	   	}
};

int main()
{
	node* head = NULL;
	ll obj;
	
	head = obj.add();
	obj.print();
	
	int k;
	cout<<"\nenter kth element u want to delete from end"<<endl;
	cin>>k;
	
	head = obj.del(head, k);
	
	cout<<"after delete"<<endl;
	obj.print();
}
