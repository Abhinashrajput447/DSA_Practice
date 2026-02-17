#include <stdio.h>
#include <stdlib.h>

//struct Node
struct Node {
  int data;
  struct Node* next;
}*head = NULL;

//Create a Node
void create(int val) {
  struct Node* newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  // int val;
  // printf("Create Node : ");
  // scanf("%d", &val);
  newNode -> data = val;
  newNode -> next = NULL;
  if(head == NULL) {
    head = newNode;
  }
}

//Insert at begin
void insert_beg(int val) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode -> data = val;
  newNode -> next = NULL;

  if(head == NULL) {
    printf("LL is Empty\n");
    return;
  }else{
    newNode -> next = head;
    head = newNode;
  }
} 

//Insert at end 
void insert_end(int val) {
  struct Node* newNode, *temp = head;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode -> data = val;
  newNode -> next = NULL;

  if(head == NULL) {
    printf("LL is Empty\n");return;
  }else{
    while(temp -> next -> next != NULL) {
      temp = temp -> next;
    }
    temp -> next = newNode;
  }
}


//Display Linked List Elements 
void display() {
  struct Node* temp = head;
  while(temp != NULL) {
    printf("%d --> ", temp -> data);
    temp = temp -> next;
  }
  printf("\n----------------------------------------------\n");
}

//Reversing the List 
void reverse() {
  struct Node* curr = head, *prev = NULL, *temp = NULL;
  while(curr != NULL) {
    temp = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = temp;
  }
  head = prev;
  // display();
}

//Count the nodes
int count() {
  struct Node* temp = head;
  int cnt = 0;
  while(temp != NULL) {
    cnt++;
    temp = temp -> next;
  }
  return cnt;
}

//Deleter Begin
void delete_beg() {
  struct Node* temp = head;

  if(head == NULL) {
    printf("SLL is Empty\n");
  }else{
    head = head -> next;

    printf("%d deleted val\n", temp -> data);
    temp -> next = NULL;
    free(temp);
  }
}

//Delete End
void delete_end() {
  struct Node* temp = head, *t;

  if(head == NULL) {
    printf("LL is Empty\n");
    return;
  }else{
    while(temp -> next -> next != NULL) {
      temp = temp -> next;
    }
    t = temp -> next;
    printf("%d deleted val\n", t -> data);
    temp -> next = NULL;
    free(t);
  }
}

//Insert Middle
void insert_midd(int val, int pos) {
  struct Node* temp = head, *newNode, *t;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  int cnt = 0;
  newNode -> data = val;
  newNode -> next = NULL;
  while(cnt != pos-1) {
    cnt++;
    temp = temp -> next;
  }
  // t = temp;
  newNode -> next = temp -> next;
  temp -> next = newNode;
}

//Delete  val from given Position
void delete_midd(int pos) {
  struct Node* temp = head, *t;
  int cnt = 1;
  while(cnt != pos-1) {
    cnt++;
    temp = temp -> next;
  }
  printf("Deleted val %d \n", temp -> data);
  t = temp -> next;
  temp -> next = temp -> next -> next;
  free(t);
}

//Sort Linked List
void sort_sll() {
  struct Node* i , *j, *temp = head;

  for(i=head; i->next!= NULL; i=i->next) {
    for(j=head; j->next!=NULL; j=j->next) {
      if((j->data) > (j->next -> data)) {
        int s = j->data;
        j->data = j->next->data;
        j->next->data = s;
      }
    }
  }
}

// int main() {
//   // struct Node;
//   create(5);
//   insert_beg(14);
//   insert_beg(31);
//   insert_beg(2);
//   insert_beg(11);
//   insert_end(16);
//   insert_end(70);
//   // insert_end();
//   // insert_end();
//   display();
//   // reverse();
//   // display();
//   // printf("%d \n", count());
//   // delete_beg();
//   // delete_beg();
//   // delete_beg();
//   // display();
//   // delete_end();
//   // insert_midd(10, 2);
//   delete_midd(3);
//   display();
//   sort_sll();
//   display();
//   return 0;
// }