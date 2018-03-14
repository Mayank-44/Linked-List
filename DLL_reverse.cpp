/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
    int c=1;
    if(head==NULL || head->next==NULL)
        return head;
    Node *end=head,*beg=head;
    while(end->next!=NULL)
    {
        c++;
        end=end->next;
    }
    
    for(int i=1;i<=c/2;i++)
    {
        int temp=beg->data;
        beg->data=end->data;
        end->data=temp;
        beg=beg->next;
        end=end->prev;
    }
    return head;
}

