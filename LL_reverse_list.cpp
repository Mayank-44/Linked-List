/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
     Node *tail, *temp;
    tail = NULL;
    while (head != NULL) {
        temp = head->next;
        head->next = tail;
        tail = head;
        head = temp;
    }
    return tail;
}

