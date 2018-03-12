/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *temp=new Node();
    temp->data=data;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    if(position==0)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        Node *p;
        p=head;
        for(int i=1;i<position;i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
    }
    return head;
}
