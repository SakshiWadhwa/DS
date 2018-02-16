#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<int>g;
	g.insert(10);
	g.insert(50);
	g.insert(5);
	g.insert(50);
	multiset<int>::iterator it;
	it=g.begin();
	g.insert(it++,20);
	g.insert(it,35);

g.lower_bound(40);
cout<<"size"<<g.size()<<endl;
cout<<"highest value"<<*(g.rbegin())<<endl;
/*while(g.value_comp(*(g.begin()),*(g.rbegin())))
{
	cout<<"highest"<<*it;
}*/
	for(it=g.begin();it!=g.end();it++)
	{
		cout<<*it<<" ";
	}
}
