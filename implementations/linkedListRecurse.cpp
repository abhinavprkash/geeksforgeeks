#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
 	int data; 
 	struct Node* next;
 };
void Print(struct Node* p)
{
	if(p == NULL) return;//Exit condition
	printf("%d ",p->data);//first print the value in the node
	Print(p->next);//recursive call
}
void reversePrint(struct Node* p)
{
	if(p == NULL) return;//Exit condition
	reversePrint(p->next);//recursive call
	printf("%d ",p->data);//first print the value in the node
}
struct Node* Insert(Node* head, int data){
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
int main(int argc, char const *argv[])
{
	struct Node* head = NULL;//local variable
	head= Insert(head,2);
	head= Insert(head,4);
	head= Insert(head,6);
	head= Insert(head,5);
	Print(head);
	printf("\n");
	reversePrint(head);
}