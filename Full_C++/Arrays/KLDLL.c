#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
} *head = NULL;

//Creating Only One Node in DLL 
void create_DLL(int val) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = val;
  newNode->next = NULL;
  newNode->prev = NULL;

  head = newNode;   // only one node
}

//Inserting Begin
void insert_beg(int val) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode -> data = val;
  newNode -> next = NULL;
  newNode -> prev = NULL;

  if(head == NULL) {
    printf("DLL IS EMPTY\n");
  }else{
    newNode -> next = head;
    head = newNode;
  }
}

//Printing DLL
void display_DLL() {
  struct Node* temp = head;

  if(head == NULL) {
    printf("DLL is Empty\n");
    return;
  }

  while(temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->next;
  }
}


int main() {
  create_DLL(10);
  insert_beg(15);
  insert_beg(20);
  display_DLL();
}