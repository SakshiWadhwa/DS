#include<iostream>
using namespace std;

class node{
	public:
		node* left;
		node* right;
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
			return root;
		}
		
		void pre_order(node* root, int b[], int k)
		{
			if(root!=NULL)
			{
				//cout<<root->data<<" ";
				b[k] = root->data;
				//cout<<b[k] <<" ";
				pre_order(root->left,b,k+1);
				pre_order(root->right,b,k+1);
				//return k;
			}
			//return k-1;
		//	 cout<<b[k]<<" ";
		}
};

int main()
{
	bst obj;
	cout<<"enter case: "<<endl;
	int t,i,a[10000],b[10000],c;
	cin>>t;
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
	
		 obj.pre_order(root,b,0);
		for(i = 0; i < k; i++)
		cout<<"b"<<i<<": "<<b[i]<<endl;
	
	cout<<k<<" ";
		
		root = NULL;
	}
	
	
}
