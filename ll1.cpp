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
				cout<<head->data<<" ";
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
			
			int x = (count-k) + 1;
			
			node* temp =  head->next;
			node* prev = head;
			node* t = head;
			//cout<<count<<" ";
			if(head==NULL)
					return head;
			if(x == 1)
			{
				    	t=head;
						head=head->next;
			
						delete t;
						return head;
					
			}
			
			else
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
			
		}
		
		void print()
		{
			//printf("%d\n",head->data);
			node* current = head;
			int c=4;
			while(c--)
			{
				//cout<<current->data<<" ";
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
