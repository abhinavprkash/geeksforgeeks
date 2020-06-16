#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
 	int data; 
 	struct Node* next;
 };

 struct Node* head;//global

 void Insert(int x){
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;

}
 void Print()//print all elements in the list
 {
 	struct Node* temp = head;
 	printf("List is");
 	while(temp!=NULL) {
 	    printf(" %d",temp->data );
 	    temp = temp->next;
 	    }
 	    printf("\n");
 }

 void Delete(int n)//delete node at nth position
 {
 	struct Node* temp1 = head;
 	if (n==1)
 	{
 		head = temp1->next;
 		free(temp1);
 		return;
 	}
 	int i;
 	for(int i = 0; i < n-2; i++) 
 		temp1 = temp1->next;
 		//temp1 points to (n-1)th Node
 	struct Node* temp2 = temp1->next;//nth position
 	temp1->next =  temp2->next;//(n+1)th position
 	free(temp2);//delete temp2;
 }
 int main(int argc, char const *argv[])
 {
 	head =  NULL;//empty list
 	Insert(2);
 	Insert(4);
 	Insert(6);
 	Insert(5);//list: 2.4.6.5
 	Print();
 	int n;
 	printf("Enter the position\n");
 	scanf("%d",&n);
 	Delete(n);
 	Print();
 	return 0;
 }