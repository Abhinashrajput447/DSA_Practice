#include <stdio.h>
#include <stdlib.h>

//str
struct Node {
  int data;
  struct Node* next;
}*head;

void create() {
  struct  Node* newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node*));
  int val;
  printf("Enter value for LL creation = ");
  scanf("%d", &val);
  newNode -> data = val;
  newNode -> next = NULL;
  
  if(head == NULL) {
    head = newNode;
  }
}

void insert_end() {
  struct Node* newNode, *temp;
  newNode = (struct Node*)malloc(sizeof(struct Node*));
  int val;
  printf("Enter value for Inser from End = ");
  scanf("%d", &val);
  newNode -> data = val;
  newNode -> next = NULL;

  if(head == NULL) {
    printf("LL is Empty\n");
    return;
  }else{
    while(temp -> next != NULL)  {
      temp = temp -> next;
    }
    temp -> next = newNode;
  }
}

void display() {
  struct Node *temp = head;

  while(temp != NULL) {
    printf("%d-->", temp -> data);
    temp = temp -> next;
  }
}

int main() {
  // struct Node;
  create();
  insert_end();
  insert_end();
  display();
  return 0;
}