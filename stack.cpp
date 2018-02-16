#include<iostream>
using namespace std;

int main( void )
{
	int top = -1;
	int arr[50] = {0};
	int i;
	
	for(i = 0; i < 10; i++)
	{
		top = top + 1;
		arr[top] = i;
	}
	
	while(top != -1)
	{
		cout<<"popped: "<<arr[top]<<endl;
		top--;
	}
}
