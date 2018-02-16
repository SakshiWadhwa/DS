#include<iostream>
#include<queue>
using namespace std;

void bfs(int a[100][100], int x,int n)
{
	int visit[n] = {0};
	queue<int>q;
	int j;
	q.push(x);
	visit[x] = 1;
	
	while(!q.empty())
	{
	   int k = q.front();
	   cout<<k<<" ";
	     q.pop();
		
	   for(j = 0; j <n; j++)
	   {
			if(visit[j] == 0 && a[k][j] == 1)
			{
				q.push(j);
				visit[j] = 1;
	    	}   	
	   }	
	}
	
		
}

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
   	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		
		cout<<endl;
	}
   bfs(a,0,n);
}
