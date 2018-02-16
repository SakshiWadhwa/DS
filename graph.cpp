#include<iostream>
#include<list>
using namespace std;

class graph{
	int v;
	list<int>*adj;
	
	public:
		int count = 0;
		graph(int v)
		{
			this->v = v;
			adj = new list <int>[v];
		}
		void add(int u, int v)
		{
			
			adj[u].push_back(v);
			
		}
		
		void printall(int s, int d)
		{
			bool *visit = new bool[v];
			int *path = new int [v];
			int index = 0;
			
			int i;
			for(i = 0; i < v; i++)
			{
				visit[i] = false;
			}
			print(s, d, visit, path, index);
			cout<<"count: "<<count;
		}
		
		void print(int u, int d, bool visit[], int path[], int &index)
		{
			visit[u] = true;
			path[index] = u;
			index++;
			int i;
			if(u == d)
			{
				count++;
				for(i = 0; i < index; i++)
				{
					cout<<path[i]<<" ";
				}
				cout<<endl;
			}
			else
			{
				list <int> :: iterator it;
				for(it = adj[u].begin(); it != adj[u].end(); it++)
				{
					if(!visit[*it])
					  print(*it, d, visit, path, index);
				}
			}
			
			index--;
			visit[u] = false;
			//cout<<endl<<"count: "<<count<<endl;;
		}
		
		
};

int main()
{
	
	cout<<"enter vertex nd edge: "<<endl;
	int v, u;
	cin>>v>>u;
	int i;
	graph obj(v);
	cout<<"enter edges: "<<endl;
	int a,b,s,d;
	for(i = 0; i < u; i++)
	{
		cin>>a>>b;
		obj.add(a,b);
    }
	cout<<"enter source & dest:"<<endl;
	cin>>s>>d;
	obj.printall(s,d);
//	cout<<obj.count;
}
