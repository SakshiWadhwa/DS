#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};
class linklist{
	public:
		node* head = NULL;
		node* current;
		node* add()
		{
			cout<<"enter n";
			int n;
			cin>>n;
			cout<<"enter elements"<<endl;
			int i;
			for(i = 0; i < n; i++)
			{
				//cin>>n;
				node* new_node = new node;
				cin>>new_node->data;
				new_node->next = NULL;
				
				if(!head)
				head = new_node;
				
				else
				{current = head;
				while(current->next)
				    current = current->next;
				    
				current->next = new_node;
				//new_node = current;
			    }	
			}
			return head;
		}
		
		
		node* remove_duplicates(node* head)
		{
			node* current = head;
			node* temp = head;
			while( current)
			{
				temp = current;
				while( temp->next )
				{
					if(current->data == temp->next->data)
					temp->next = temp->next->next;
					else
					temp = temp->next;
				}
				current = current->next;
			}
			return head;
			
		/*	 if(head == NULL)
		    {
		        return head;
		    }
    
		    node* curr = head;
		    node* first = head;
		    node* second = head -> next;
    
		    while(curr && second)
		    {
		        while(second->next)// && first->next->next)
		        {
		            if(curr -> data == second -> data)
		            {
		                second = second -> next;
		                node* t = first -> next;
		                first -> next = first->next->next;
		             	 second = second -> next;
		                delete t;
		                t = NULL;
		            }
		            else
		            {
		                first = first -> next;
		                second = second -> next;
		            }
		        }
		        current = current->next;
		        first = current;
		        second = current->next;
		        
		    }
    return head;*/
		}
		
		node* print(node* head)
		{
			node* current = head;
			while(current)
			{
				cout<<current->data<<" ";
				current =  current->next;
			}
		}
};

int main()
{
	//node* head = NULL;
	linklist obj;
	node* a = obj.add();
	node* b = obj. remove_duplicates(a);
    obj.print(b);
	
}
