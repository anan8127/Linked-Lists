#include <stdio.h>
#include <stdlib.h>

void disp();

struct node
{
	int data;
	struct node *next;
};

struct node *start;

int main()
{
	struct node *newnode1, *newnode2, *newnode3, *newnode4;
	
	newnode1 = (struct node*) malloc(sizeof(struct node));
	newnode2 = (struct node*) malloc(sizeof(struct node));
	newnode3 = (struct node*) malloc(sizeof(struct node));
	newnode4 = (struct node*) malloc(sizeof(struct node));
	
	newnode1 -> data = 10;
	newnode1 -> next = newnode2;
	
	start = newnode1;
	
	newnode2 -> data = 20;
	newnode2 -> next = newnode3;
	
	newnode3 -> data = 30;
	newnode3 -> next = newnode4;
	 
	newnode4 -> data = 40;
	newnode4 -> next = NULL;
	
	disp();
	
	return 0;
	
	
	
}



void disp()
{
	struct node *temp;
	
	temp = start;
	
	while(temp != NULL)
	{
		printf("data: %d	selfaddr: %d	nextaddr: %d\n", temp -> data, temp, temp -> next);
		temp = temp -> next;
	}
}