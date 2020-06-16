#include <bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node* next;
};

struct Node* head;
void Reverse(struct Node* p)
{
  if(p->next ==NULL)
  {
    head = p;
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
 int main() {
   int n;
   cin>>n;
   for(int i =0;i<n;i++){
     struct Node * head = NULL;
     int x;
     cin>>x;
     head = Insert(head,x);}
     head = Reverse(head);
     Print(head);
   return 0;
 }
