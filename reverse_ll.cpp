#include<iostream>
using namespace std;

struct node{
	
		int data;
		node* next;
};

class ll{
    struct node *head=NULL;
    struct node *temp;
    struct node *current;
    int n;
	public:
		void addatlast(){
	    int i;
		int n;
	//node* temp, head, current;
		cout<<"enter no. of elements"<<endl;
		cin>>n;
		cout<<"enter elem"<<endl;
		for(i=0;i<n;i++)
		{
		 	temp = new node;
        	cin>>temp->data;
        	temp->next = NULL;
        
        	if(head==NULL)
        	head=temp;
        
        else
        {
        	current=head;
        	while(current->next)
        	{
        		current=current->next;
			}
			current->next=temp;
		}
		
	}
		head = reverse_ll(head);
	}
	
	node* reverse_ll(node* head) 
	{
	    if(head == NULL)
            return NULL;
        
        node* newhead;
		    
        if(head->next == NULL)
        {
            newhead = head;
            return newhead;
		}
		
		else
		{
			newhead = reverse_ll(head->next);
			head->next->next = head;
			head->next = NULL;
			
			return newhead;
			
		}
	}
	
	void print()
	{
		node* current=head;
		while(current)
		{
			cout<<current->data<<" ";
			current=current->next;
		}
	}
};

int main()
{
	ll obj;
//	node* head = new node();
	obj.addatlast();
	node* current;
//	head = obj.reverse_ll(head);
	obj.print();
}
