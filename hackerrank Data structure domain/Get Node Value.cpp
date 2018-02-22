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
//this one ic cheated 
//below code is to be rechecked
   /* Node *ptr=head;
    Node *prev=head;
    int c=0;
    while(ptr!=NULL)
        {
        ptr=ptr->next;
        c++;
    }
    for(int i=0;i<c-positionFromTail;i++)
        {
        prev=prev->next;
    }
    return prev->data; */
    int index = 0;
    Node* current = head;
    Node* result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
}
 