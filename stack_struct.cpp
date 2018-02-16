#include<stdio.h>

struct stack{
	int top;
	int arr[10];
};

struct stack obj;

void push(int a)
{
  obj.top++;
  obj.arr[obj.top] =  a;
    	
}

int pop()
{
	return obj.top;
	obj.top--;
}

void display()
{
	while(obj.top != -1)
	{
		printf("popped element is: %d\n", obj.arr[obj.top]);
		obj.top--;
	}
}

int main()
{
	obj.top = -1;
	//obj.arr = {0};
	
	int i;
	for(i = 0; i < 10; i++)
	{
		push(i);
	}
	
	int t;
	t = pop();
	printf("%d \n",t);
	

	display();
	
}


