#include<iostream>
using namespace std;

int partition(int a[], int beg, int end)
{
	int mid = (beg+end)/2;
	int pivot = a[mid];
	cout<<endl<<"piv:"<<pivot<<endl;
	int i,j;
	i = beg-1;
	for(j = beg; j < end; j++)
	{
		if(pivot >= a[j])
		{
			i++;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			
		}
	}
	i++;
    int t = a[end];
    a[end] = a[i];
    a[i] = t;
    cout<<"i array"<<a[i]<<" "<<endl;
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
