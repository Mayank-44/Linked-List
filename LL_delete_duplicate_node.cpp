/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head==NULL || head->next==NULL)
        return head;
    else
    {
        Node *tmp1=head->next;
        Node *tmp2=head;
        while(tmp1!=NULL)
        {
            if(tmp2->data!=tmp1->data)
            {
                tmp2=tmp2->next;
                tmp1=tmp1->next;
            }
            else
            {
                tmp1=tmp1->next;
                tmp2->next=tmp1;
            }
        }
    }
    return head;
}

