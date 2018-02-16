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
	
    while((i <= j) && a[mid]!=k)
    {
    	if(a[mid] > k)
    	   j = mid-1;
    	else
    	   i = mid+1;
    	   
    	mid = (i+j)/2;
    	
	}
	if(a[mid] == k)
	   cout<<"element found at: "<<mid+1;
	
	else
	cout<<"not found"<<endl;
	

		
	
}
