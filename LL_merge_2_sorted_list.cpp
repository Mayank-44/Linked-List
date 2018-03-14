/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node *head;
    Node *A;
    if(headA==NULL)
        return headB;
    else
    if(headB==NULL)
        return headA;
    else
    {
        if(headA->data >= headB->data)
        {
            A=head=headB;
            headB=headB->next;
        }
        else
        {
            A=head=headA;
            headA=headA->next;
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA->data <= headB->data)
            {
                A->next=headA;
                A=A->next;
                headA=headA->next;
                A->next=NULL;
            }
            else
            {
                A->next=headB;
                A=A->next;
                headB=headB->next;
                A->next=NULL;    
            }
        }
        if(headA!=NULL)
            A->next=headA;
        else
        if(headB!=NULL)
            A->next=headB;
    }
    return head;
}
