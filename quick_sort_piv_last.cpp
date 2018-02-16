#include<iostream>
using namespace std;

int partition(int a[], int beg, int end)
{
	int pivot = a[end];
	int i,j;
	i = beg-1;
	cout<<endl<<"piv:"<<pivot<<endl;
	for(j = beg; j < end; j++)
	{
		if(pivot >= a[j])
		{
			i++;
			/*int t = a[i];
			a[i] = a[j];
			a[j] = t;*/
			
			int x = a[i];
			int y = a[j];
			cout<<" before x: "<<x<<" before Y: "<<y<<endl;
			x = x ^ y; cout<<"x1: "<<x<<" y1: "<<y<<endl;
			y = x ^ y; cout<<"x2: "<<x<<" y2: "<<y<<endl;
			x = x ^ y; cout<<"x3: "<<x<<" y3: "<<y<<endl;
			
			  a[i] = x;
			  a[j] = y;
			  
			cout<<" x: "<<x<<" Y: "<<y<<endl;
			cout<<" i: "<<a[i]<<" j: "<<a[j]<<endl<<endl;
			  
		/*	a[i] = a[i]^a[j];
			a[j] = a[i]^a[j];
			a[i] = a[i]^a[j];*/
			
			
			
		}
	}
	i++;
	
    int t = a[end];
    a[end] = a[i];
    a[i] = t;
    return i;
}

void quick(int a[], int beg, int end)
{
	if(beg<end)
	{
		int p = partition(a,beg,end);
		quick(a,beg,p-1);
		quick(a,p+1,end);
	}
	
}

int main()
{
	int n,i,j;
	cout<<"enter n"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"enter array"<<endl;
	
	for(i = 0; i < n; i++)
	    cin>>a[i];
	    
	quick(a,0,n-1);
	
	for(i = 0; i < n; i++)
	    cout<<a[i]<<" ";
	    
}
