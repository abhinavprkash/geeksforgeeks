#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head;

struct Node* GetNewNode(int x){
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	(*newNode)->data=x;
	(*newNode)->prev = NULL;
	(*newNode)->next = NULL;
	return newNode;
}

void InsertAtHead(int x){
	struct Node* newNode = GetNewNode(x);
	if (head ==NULL)
	{
		head= newNode;
		return;
	}
	head->prev = newNode;
	newNode->next= head;
	head =	newNode;
}

void Print(){
 	struct Node* temp = head;
 	printf("List is");
 	while(temp!=NULL) {
 	    printf(" %d",temp->data );
 	    temp = temp->next;
 	    }
 	    printf("\n");
 }

 void Reverse(struct Node* p)
 {
 	if (p->next==NULL)//exit condition
 	{
 		head =p;
 		return;
 	}
 	Reverse(p->next);
 	struct Node* q = p->next;
 	q->next = p;
 	p->next = NULL;
 }

int main(int argc, char const *argv[])
{
	head = NULL;//local variable
	head= Insert(head,2);
	head= Insert(head,4);
	head= Insert(head,6);
	head= Insert(head,5);
	Print(head);
	printf("\n");
	reversePrint(head);	
	return 0;
}