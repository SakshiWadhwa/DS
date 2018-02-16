#include<iostream>
using namespace std;

class root{
	public:
		root* left;
		root* right;
		int data;
};

class binary_search_tree
{
	public:
		root* enter(root* r, int x)
		{
			int i,n;
			if(!r)
			{
				  root* nn = new root();
				  nn->left = NULL;
				  nn->right = NULL;
				  nn->data = x;
				  r = nn;
		   	}
			   
			else if(x <= r->data)
				  r->left=enter(r->left, x);
				  
			else if(x > r->data)
				   r->right=enter(r->right, x);
				   
			return r;
		}
		
		void in_order(root* r)
		{
			if(!r)
			  return;
			else
			{
			  in_order(r->left);
			  cout<<r->data<<" ";
			  in_order(r->right);
		    }
		}
		
		root* delete_root(root* r,int k)
		{
			
			if(!r)
			  return r;
			
		    else if(k < r->data)
			{
				r->left = delete_root(r->left,k);
			}
		
		    else if(k > r->data)
		    {
		    	r->right = delete_root(r->right,k);
			}
			
			else
			{
				if(r->left == NULL)
				{
					root* t = r->right;
					delete r;
					return t;
				}
				
				else if(r->right == NULL)
				{
					root* t = r->left;
					delete r;
					return t;
				}
			}
			return r;
		}
};

int main()
{
	binary_search_tree obj;
	root* t = NULL;
	
	int i;
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
			
			
	for(i = 0; i < n; i++)
	{
	int x;
	cin>>x;
	t = obj.enter(t,x);
    }
	obj.in_order(t);
	
	cout<<"\nenter element you want to delete"<<endl;
	int k;
	cin>>k;
	root* a;		
	
	a = obj.delete_root(t,k);
	obj.in_order(a);
}
