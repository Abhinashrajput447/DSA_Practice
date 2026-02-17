void display() {
  struct Node* temp = head;
  while(temp != NULL) {
    printf("%d --> ", temp -> data);
    temp = temp -> next;
  }
  printf("\n----------------------------------------------\n");
}