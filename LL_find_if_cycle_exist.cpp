/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    int count=100,c=0;
    if(head==NULL || head->next==NULL)
        return false;
    else
    {
        Node *ahead=head->next;
        while(ahead!=NULL && c<count)
        {
            ahead=ahead->next;
            c++;
        }
        if(c<count) 
        return false;
    }
    return true;
}

