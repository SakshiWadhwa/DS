#include<iostream>
using namespace std;

int main()
{
	int n,i,j,v,e;
	cout<<"enter nodes"<<endl;
	cin>>n;
	
	cout<<"enter edges"<<endl;
    int a[100][100];
    
    for(i = 0; i < n; i++)
    {
    	for(j = 0; j < n; j++)
    	   a[i][j] = 0;
	}
   
   for(i = 0; i < (n*(n-1)); i++)
   {
   	 cin>>e>>v;
   	 if(e == -1 && v == -1)
   	   break;
   	 else 
   	 {
   	 	   
		a[e][v] = 1;
		
     }
   }
   
   for(i = 0; i < n; i++)
   {
   	   for(j = 0; j < n; j++)
   	      cout<<a[i][j]<<" ";
   	 cout<<endl;
    }
    
	
	
	
}
