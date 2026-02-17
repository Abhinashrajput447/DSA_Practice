#include <stdio.h>
#include <stdlib.h>


//Stack Implementation Using LL
struct Node {
  int data;
  struct Node* next;
} *top = NULL;

//push Function Creation
void push(int val) {
  struct Node* newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode -> data = val;
  newNode -> next = NULL;
  if(top == NULL) {
    top = newNode;
  }else{
    newNode -> next = top;
    top = newNode;
  }
}

//Pop Function Creation
void pop() {
  struct Node* temp = top;
  if(top == NULL) {
    printf("Stack is Empty\n");
    return;
  }else{
    top = top -> next;
    printf("%d deleted val\n", temp -> data);
    temp -> next = NULL;
    free(temp);
  }
}

//Top or Peek Function Creation
void peek() {
  if(top == NULL) {
    printf("Stack is Empty\n");
    return;
  }else{
    printf("%d", top -> data);
  }
}

//Display Stack
void display() {
  if(top == NULL) {
    printf("Stack is Empty\n");
    return;
  }
  struct Node* temp = top;
  while(temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n-----------------------------------------------------------\n");
}

//-------------------------------------------------------------------------------------
//Stack using structur Array
#define size 5

//Structur Creation data part
struct Stack {
  int data;
} Stack[size];
int t = -1;

//push Function Creation
void push2(int val) {
  if(t == size-1) {
    printf("Stack is Full\n");
  }

  Stack[++t].data = val;
}

//Delete Stack element
void pop2() {
  if(t == -1) {
    printf("Stack Is Empty\n");
    return;
  }
  printf("Deleted val %d\n", Stack[t].data);
  t--;
}

//void top() 

void peek2() {
  printf("%d\n", Stack[t].data);
}

//Display Function Creation
void display2() {
  for(int i=t; i>=0; i--) {
    printf("%d  ", Stack[i].data);
  }
  printf("\n");
}


int main() {
  push2(10);
  push2(20);
  push2(30);
  push2(10);
  push2(20);
  push2(30);
  peek2();
  pop2();
  push2(30);
  push2(10);
  push2(20);
  push2(30);
  display2();
  peek2();
  // peek();
  return 0;
}