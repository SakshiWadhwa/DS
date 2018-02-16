#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

node* ll()
{
	node* head = NULL;
	node* second  ;//= NULL;;
	node* third;
	
		head = ( node*) malloc(sizeof( node));
		second = (struct node*) malloc(sizeof(struct node));
		third = (struct node*) malloc(sizeof(struct node));
		
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	return head;
}

void print(node* head)
{
	node* current = head;
	while(current)
	{
		printf("%d ",current->data);
		
		current = current->next;
	}
	
}

int len_linklist(node *head)
{
	node* current = head;
	int count = 0;
	
	while(current)
	{
		count++;
		current = current -> next;
		
	}
	return count;
}

void push(node**head, int d)
{
	           				//use double pointer to modify head..as changes has reflect outside the function
	           				//through single it cant modify as they had been changed inside the function..coz of read by value n call by reference
	node* nn;
	nn = (struct node* )malloc(sizeof(struct node));
	nn->data = d;
	nn->next = NULL;
	
	if(*head == NULL)
	    *head = nn;
    else
    {
    	nn->next = *head;
    	*head = nn;
	}

}

void append(node** head, int d)
{                                //if list is empty then pass double pointer ..else u can use single pointer..
	node* nn = (struct node*)malloc(sizeof(struct node));
	nn->data = d;
	nn->next = NULL;
	
	if(*head == NULL)
	   *head = nn;
	   
	else
	{
		node* current = *head;
		while(current->next)
		    current = current->next;
		current->next = nn;
	}
}

void insert_after_pos(int pos, node** head)
{
	node* nn = (struct node*)malloc(sizeof(struct node));
	nn->data = 10;
	nn->next = NULL;
	
    //int x = len_linklist(* head);
	node* current = *head;
	
	if(pos == 1)
	{
		nn->next = *head;
		*head = nn;
	}
	else
	{     
	      int p = 1;
	      while(current->next && p<pos-1)
	       {
		       current = current->next;
		       p++;
	       }
	       
	       if(current->next == NULL)
	       {
	       	  // printf("NOt found\n");
	       	   current->next = nn;
		   }
	           
	        
	        else
	        {
	        	nn->next = current->next;
	        	current->next = nn;
			
			}
	   
   }
}
   
   void delete_after_pos(node **head, int pos)
   {
   	  node* current = *head;
   	  if(pos == 1)
    	{
    		if(!head)
    		   return;
    		   
    		else
    		{   
   		       node* t = *head;
   		       *head = (*head)->next;
   		       free(t);
   		       t = NULL;
   		   
         	}
	   }
	   
	   else
	   {
	   	   int p = 1;
	   	   current = *head;
	       while(current && p<pos-1)
	       {
		       current = current->next;
		       p++;
	       }
	        
	        	node* t = current->next;
	        	current->next = t->next;
	        	
	        	free(t);
	        	t = NULL;
	   }
	    
   }
   
   node* reverse(node** head)
   {
   	node*nn;
   	if(!*head)
   	   return NULL;
    
    if(!(*head)->next)
    {
    	nn = *head;
    	return nn;
	}
    
    else
    {
    	nn = reverse(&(*head)->next);
    	(*head)->next->next = *head;
    	(*head)->next = NULL;
    	return nn;
	}
   }


int main()
{
	node *obj = ll();
	print(obj);

	
	int x = len_linklist(obj);
	printf("\nlength is: %d\n", x);
	
	
	push(&obj, 4);
	print(obj);
	
	int y = len_linklist(obj);
	printf("\nlength is: %d\n", y);
	
	append(&obj, 6);
	print (obj);
	
	int z = len_linklist(obj);
	printf("\nlength is: %d\n", z);
	
	int t;
	printf("enter where u want to insert\n");
	scanf("%d",&t);
	insert_after_pos(t, &obj);
	print(obj);
	
	int a;
	printf("enter pos where u want to delete\n");
	scanf("%d",&a);
	delete_after_pos(&obj,a);
	print(obj);
	
	reverse(&obj);
	print(obj);
	
	return 0;
}
