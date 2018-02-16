#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	
};
class binary_tree
{
	public:

		node* enter(int a[],int x)
		{
	
		node* root=NULL;
		if(a[x]!=0)
		{
		
			root=new node;
			
			root->data=a[x];
			root->left=enter(a,(2*x)+1);
			root->right=enter(a,(2*x)+2);
		}
		return root;
		
		
		}
	
		
		void print_pre(node* t)
		{if(!t)
		return;
		else
		{
		
		cout<<t->data<<" ";
		print_pre(t->left);
		print_pre(t->right);
	}
		}
		
		void print_in(node* t)
		{if(!t)
		return;
		else
		{
		
	
		print_in(t->left);
			cout<<t->data<<" ";
		print_in(t->right);
	}
		}
		
		void print_post(node* t)
		{if(!t)
		return;
		else
		{
		
		
		print_post(t->left);
		print_post(t->right);
		cout<<t->data<<" ";
	}
		}
		
		
};
int main()
{
	binary_tree obj;
	
	int n,i;
	cout<<"enter n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];	
	

	}

		node *x=	obj.enter(a,0);
		cout<<endl<<"preorder print"<<endl;
	obj.print_pre(x);
	cout<<endl<<"inorder print"<<endl;
	obj.print_in(x);
	cout<<endl<<"postorder"<<endl;
	obj.print_post(x);
	
}
