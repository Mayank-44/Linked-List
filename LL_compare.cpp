/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    int a=0,b=0;
    Node *temp1=headA,*temp2=headB;
    while(temp1!=NULL)
    {
        a++;
        temp1=temp1->next;
    }
     while(temp2!=NULL)
    {
        b++;
        temp2=temp2->next;
    }
    if(a!=b)
        return 0;
    else
        while(headA!=NULL && headB!=NULL)
        {
            if(headA->data!=headB->data)
                return 0;
            headA=headA->next;
            headB=headB->next;
        }
    return 1;
}

