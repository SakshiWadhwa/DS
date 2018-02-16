#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};

class linklist{
	public:
		node* headA = NULL;
		node* headB = NULL;
		node* head = NULL;
		
		node* add(node* head, int d)
		{
		    node* nn = new node();
			nn->data = d;
			nn->next = NULL;
			
			if(!head)
			   head = nn;
			
			else
			{
				node* current =  head;
				while(current->next)
				     current = current->next;
			    current -> next = nn;
				}
				return head;	
		}
		
		void sum()
		{
			
		}
		
		void rev_print(node* head)
		{
			node* current = head;
				/*while(current)
				{
					cout<<current->data<<" ";
					current = current->next;
				}*/
				if(!head)
				return;
				
				
					rev_print(head->next);
					cout<<head->data<<" ";
				
			
		}
};

int main()
{
	int i,n1,j,n2,a,b;
	node* headA = NULL;
	node* headB = NULL;
	linklist obj;
	
	cout<<"enter n 1st list"<<endl;
	cin>>n1;
	
	cout<<"enter list1"<<endl;
	for(i = 0; i < n1; i++)
	{
		cin>>a;
		headA = obj.add(headA,a);
	}
	cout<<"1st list: "<<endl;
	obj.rev_print(headA);
	cout<<endl;
	
	cout<<"enter n 2st list"<<endl;
	cin>>n2;
	
	cout<<"enter list2"<<endl;
	for(i = 0; i < n2; i++)
	{
		cin>>b;
		headB = obj.add(headB,b);
	}
	cout<<"2nd list: "<<endl;
	obj.rev_print(headB);
	
	
}
