/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* tmp = head;
    int index = 0;
    
    while(tmp!=NULL)
    {
        index++;
        tmp=tmp->next;
    }
    tmp=head;
    for(int i=0;i<index-positionFromTail-1;i++)
    {
        tmp=tmp->next;
    }
    
    return tmp->data;
}

