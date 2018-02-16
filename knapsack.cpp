#include<iostream>
#include<algorithm>
using namespace std;


int partition(float a[], int beg, int end, float x[], float w[], int maxw)
{
	int i, j, pivot;
	i = beg  ;
	
	pivot = a[end];

	for(j = beg; j < end; j++)
	{
		if(pivot >= a[j])
		{
			i++;
			float t = a[i];
			a[i] = a[j];
			a[j] = t;
			
			float k = x[i];
			x[i] = x[j];
			x[j] = k;
			
			float s = w[i];
			w[i] = w[j];
			w[j] = s;
			
			
		}
			
	}
	i++;
	       float t = a[i];
			a[i] = a[end];
			a[end] = t;
			
			float k = x[i];
			x[i] = x[end];
			x[end] = k;
			
			float s = w[i];
			w[i] = w[end];
			w[j] = s;
	return i;
}

void quicksort(float a[], int beg, int end, float x[], float w[], int maxw)
{
	if(beg < end)
	{
		int p = partition(a, beg, end, x, w, maxw);
		quicksort(a, beg, p-1, x, w, maxw);
		quicksort(a, p+1, end, x, w, maxw);
	}
}


int main()
{
	int i,j,n,pivot;
	cout<<"enter n"<<endl;
	cin>>n;
	
	float p[n],w[n],maxw;
	
	cout<<"enter profit"<<endl;
	for(i = 0; i < n; i++)
	   cin>>p[i];
	 
	cout<<"enter weight"<<endl;  
	for(i = 0; i < n; i++)
	   cin>>w[i];
	
	cout<<"enter max weight"<<endl;
	  cin>>maxw;
	  
	float a[100];
	for(i = 0; i < n; i++)
	{
		a[i] = (float)p[i]/(float)w[i];
	}
	
	
	
	quicksort(a,0,n-1,p,w,maxw);
	
	cout<<"\npw"<<endl;
	for(i = 0; i < n; i++)
	  cout<<a[i]<<" ";
	  
	cout<<"\np"<<endl;
	for(i = 0; i < n; i++)
	  cout<<p[i]<<" ";
	  
	cout<<"\nw"<<endl;
	for(i = 0; i < n; i++)
	  cout<<w[i]<<" ";
	  
	  cout<<endl;
	  float t = 0;
	  int k = n-1;
	  while(maxw > 0)
	  {
	  	if(w[k] < maxw)
	  	{
	  		t = t + p[k];
	  		maxw = maxw - w[k];
	  		 
	  		 k--;
		}
		else if(w[k] > maxw)
		{ 
			//cout<<"p: "<<p[k]<<"\nw: "<<w[k]<<"\nmax: "<<maxw<<endl;	
			float x = (maxw/w[k])*p[k];
			
			
			t  = t + x;
			maxw = 0;//maxw - w[n-1];
			
		}
		
	  }
	  cout<<t<" ";
	  
	
	
}
