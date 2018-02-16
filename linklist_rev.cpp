#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


typedef struct node{
	struct node* next;
	int data;
}node;

node* enter_end()
{
	node* second  ;//= NULL;;
	node* third;
	
		node* head = ( node*) malloc(sizeof( node));
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

void reverse_ll(node* head)
{
	node* first;
	node* rest;
	
	if(head == NULL)
	   return;
	
	first = head;
	rest = 
}

int main()
{
	int i;
	node* head = enter_end();
	print(head);
	
}
