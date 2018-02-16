#include<stdio.h>

struct stack{
	int top;
	int arr[10];
};



void push(int a, struct stack *s)
{
  s->top++;
  s->arr[s->top] =  a;
    	
}

int pop(struct stack *s)
{
	return  s->arr[s->top];
	s->top--;
}

void display(struct stack s)
{
	while(s.top != -1)
	{
		printf("popped element is: %d\n", s.arr[s.top]);
		s.top--;
	}
}

int main()
{
	struct stack obj;
	obj.top = -1;
	//obj.arr = {0};
	
	int i;
	for(i = 0; i < 10; i++)
	{
		push(i, &obj);
	}
	
	int t;
	
	t = pop(&obj);
	printf("%d \n",t);
	

	display(obj);
	
}


