#include<iostream>	
#include<stack>
#include<vector>
using namespace std;
int main()
{int z;
	stack<int>v1,v2;
	for(int i=0;i<5;i++)
	{
		int d;
		cin>>d;
		v1.push(d);
		
	}
	while(!v1.empty())
	{
		int t=v1.top();
		v1.pop();
		 if(v2.empty())
		 {
		 	v2.push(t);
		 }
		 else
		 {
		 	while(t<v2.top())
		 	{
		 		int y=v2.top();
		 		v2.pop();
		 		v1.push(y);
		 		if(v2.empty())
		 		{
		 			break;
				 }
			 }
			 v2.push(t);
		 }
	}

	for(int i=0;i<5;i++)
	{
	
cout<<v2.top()<<" ";
v2.pop();
}
	
}
		 

