#include<iostream>
using namespace std;
// not completed
class node{
	public:
		int data;
		node* next;
};
class linklist{
	node* head  = NULL;
	public:
		void end(int x, int y)
		{
			node* head;
			node* nn = new node();
			nn->data = y;
			nn->next = NULL;
			if(!head)
			  head = nn;
			else
			{
				node* curr = head;
				while(curr->next)
				  cur = curr->next;
				curr->next = nn;
			}
		}
		
		void print(&x)
		{
			node* current = x;
			while(x)
			{
				cout<<curr->data;
				curr = curr->next;
			}
		}
};

int main()
{
	int n,i,j,x,y;
	linklist obj;
	cout<<"enter n"<<endl;
	cin>>n;
	int a[100];
	cout<<"enter edges nd vertices"<<endl;
	for(i = 0; i < n*(n-1); i++)
	{
		cin>>x>>y;
		if(x == -1 && y == -1)
		   break;
		
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
				a[i] = obj.end(&a[i],a[j]);
				
		}
		obj.print(&a[i]);
	
	}
}
