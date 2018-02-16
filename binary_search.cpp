#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,i,j,mid,k;
	
	cout<<"enter n"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"enter array"<<endl;
	for(i = 0; i < n; i++)
	   cin>>a[i];
	
	sort(a,a+n);
	
	cout<<"after sorting:"<<endl;
	for(i = 0; i < n; i++)
	   cout<<a[i]<<" ";
	cout<<endl;
	
	 i = 0;
	 j = n-1;
	 mid = (i + j)/2;
	
	cout<<"enter element you want to search"<<endl;
	cin>>k;
	

	
	
	if(k > a[mid])
	{
		cout<<"since element is greater than mid so i discarded the elements before mid"<<endl;
		i = mid + 1;
		j = n-1;
		while(i <= j)
		{
			if(a[i] == k)
			{
			 cout<<"element found at: "<<i+1<<endl;
			 //break;	
			}
			  
			  
			cout<<"elemets are "<<a[i] <<" at:"<<i+1<<endl;
			i++;
		}
	}
	else
	{
		cout<<"since element is lesser than mid so i discarded the elements after mid"<<endl;
		i = 0; 
		j = mid;
		while(i <= j)
		{
			if(a[i] == k)
			{
				cout<<"element found at: "<<i+1<<endl;
				//break;
			}
			  
			  
			cout<<"elemets are "<<a[i] <<" at:"<<i+1<<endl;
			i++;
		}
		
	}
}
