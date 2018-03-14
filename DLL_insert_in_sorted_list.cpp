/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
     Node *node=new Node();
    if(head==NULL)
    {
        node->data=data;
        node->next=NULL;
        node->prev=NULL;
        head=node;
        return head;
    }
    else if(head->data > data)
        {
            node->data=data;
            node->next=head;
            node->prev=NULL;
            head->prev = node;
            head=node;
            return head;
        }
    else
    {
       
        Node *current=head->next;
        Node *pre=head;
        while(current!=NULL)
        {
            if(current->data >= data)
            {
                node->data=data;
                pre->next=node;
                node->prev=pre;
                node->next=current;
                current->prev=node;
                return head;
            }
            pre=pre->next;
            current=current->next;
        }
        if(current==NULL)
    {
        node->data=data;
        pre->next=node;
        node->prev=pre;
        node->next=NULL;
    }
    }
    
  return head;
}

