#include<iostream>
using namespace std;
typedef struct ll
{
	struct ll*prev;
	int data;
	struct ll*next;
};
void addatbegin(ll** h,int d)
{
	ll* nn=new ll;
	nn->prev=NULL;
	nn->data=d;
	nn->next=*h;
	if(*h)
	(*h)->prev=nn;
	*h=nn;
}
void addatlast(ll** h,int d)
{
	if(!*h)
	{
		addatbegin(h,d);
	}
	else
	{
		ll* current=*h;
		while(current->next)
		{
			current=current->next;
		}
		ll* nn=new ll;
		nn->next=NULL;
		nn->data=d;
		nn->prev=current;
		current->next=nn;
	}
}
void display(ll* current)
{
    
	while(current)
	{
	  cout<<current->data<<endl;	
	  current=current->next;
	}
}
int main()
{
		ll* head=0;
	addatbegin(&head,10);
	addatbegin(&head,20);
	addatbegin(&head,30);
	addatlast(&head,40);
	display(head);
}
