#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
 	int data; 
 	struct Node* next;
 };
struct Node* head;
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

Node* Insert(Node* head, int data){
	Node* temp =  (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if(head==NULL) head = temp;
else{
	Node* temp1 = head;
	while(temp1->next != NULL) temp1=temp1->next;
	temp1->next = temp;
	}
	return head;
}
 void Print(Node* head)//print all elements in the list
 {
 	while(head!=NULL) {
 	    printf("%d  ",head->data );
 	    head = head->next;
 	}
 }
  int main(int argc, char const *argv[])
 {
 	struct Node* head =  NULL;//empty list
 	head =Insert(head,2);
 	head =Insert(head,4);
 	head =Insert(head,6);
 	head =Insert(head,8);//list: 2.4.6.5
 	Print(head);
 	head=Reverse(head);
 	printf("\n");
 	Print(head);
 	return 0;
 }