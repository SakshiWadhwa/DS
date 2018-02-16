#include<iostream>
using namespace std;

class stack1
{
	public:
	int top1;
	int top2;
	int *a1;
	int *a2;
	int size;
	
		stack1()
		{
			cout<<"enetr size"<<endl;
			cin>>size;
			a1 = new int[size];
			a2 = new int[size];
			int i;
			for(i = 0; i < size; i++)
			    a1[i] = 0;
			for(i = 0; i < size; i++)
			    a2[i] = 0;
			top1 = -1;
			top2 = -1;
		}
		void push(int t)
		{
		     top1++; top2++;
		     a1[top1] = t;
		     a2[top2] = t;
		     if(top1 > 0)
		     {
		     	if(t>a1[top1])
		     	{
		     		top1++;
		     		a1[top1] = t;
		     		
				 }
				 else
				 {
				     top2++;
					 a2[top2] = t;	
				 }
		     	 
			 }
		}
		int getmin()
		{
			cout<<"min: "<<endl;
			return a2[top2];
			top2--;
		}
		int pop()
		{
			
		}
		
};

int main()
{
	stack1 obj;
	cout<<"enter n: "<<endl;
	int n,t;
	cin>>n;
	int i;
	cout<<"enter elements: "<<endl;
	for(i = 0; i < n; i++)
	{
		cin>>t;
		obj.push(t);
	}
	int x = obj.getmin();
	cout<<x;
}


