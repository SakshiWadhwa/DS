#include<iostream>
using namespace std;

class node{
	public:
		node* left;
		node* right;
		node* next;
		int data;
};

class bst{
	public:
		node* root = NULL;
		node* add(node* root, int d)
		{
			node* nn = new node();
			nn->data = d;
			nn->left = NULL;
			nn->right = NULL;
			
			if(!root)
			  root = nn;
			  
			else
			{
				if(root->data < d)
				   root->right = add(root->right, d);
				else
				   root->left = add(root->left, d);
			}
		}
		
		node* add_ll(node* root, int d)
		{
			node* nn = new node();
			nn->data = d;
			nn->next = NULL;
			
			if(!root)
			 root = nn;
			else
			{
				node* current = root;
				while(current->next)
				  current = current->next;
				current -> next = nn;
			}
			return root;
		}
		
		node* pre_order(node* root)
		{
		
			int i,s;
			if(root)
			{
				//cout<<root->data<<" ";
				 root = add_ll(root, root->data);
				
				root->left = pre_order(root->left);
				root->right = pre_order(root->right);
				
				
				
			}
			return root;
			 
		}
};

int main() 
{
	bst obj;
	cout<<"enter case: "<<endl;
	int t,i,a[10000],c=0;
	cin>>t;
	int* d,*b;
	node* root = NULL;
	while(t--)
	{
		
		cout<<endl<<"enter nodes: "<<endl;
		int k;
		cin>>k;
		cout<<endl<<"enter val: "<<endl;
		int j;
		for(i = 0; i < k; i++)
		{
			cin>>j;
			a[i] = j;
			root = obj.add(root, j);
		}
		node* current = root;
	   current = obj.pre_order(root);
	   
		
		while(current)
	    {
	    	cout<<current->data<<" ";
	    	current = current -> next;
		}
		
		root = NULL;
	}
	
	
}
