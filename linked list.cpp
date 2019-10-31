#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node* next;
	};
	
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data= 5;
	head->next = second;
	
	second->data = 6;
	second->next = third;
	
	third->data = 7;
	third->next = NULL;
	

	
	while(head!=NULL){
		printf(" %d",head->data);
		head=head->next;
	}
		return 0;
}
