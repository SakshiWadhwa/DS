///wrong
#include<iostream>
using namespace std;
class braces{
	int top;
	int size;
	int a[1000][1000];
	public:
		int i,j,n;
/*	braces()
		{cin>>size;
			for(i=0;i<size;i++)
			a[i]=0;
			
		top=-1;
		}*/
		void add()
		{int m,j,c=0;
			cout<<"enter n"<<endl;
			cin>>n;
			cout<<"entr no. elements"<<endl;
			cin>>m;
			cout<<"enter elements"<<endl;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				cin>>a[i][j];
			}
		
		
	

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==a[i][j+1])
			{
				c=1;;
			}
			else
			{
				c=0;
			}
		}
		if(c==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
	}


}
};
int main()
{
	braces obj;
	obj.add();
//	obj.check();
}
   		

