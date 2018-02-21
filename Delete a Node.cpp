/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    struct Node *current=head;
if(position==0)
    {
    head=head->next;
    return head;
}
while(position>1)
    {
    current=current->next;
    position--;
}
struct Node *de=current->next;
current->next=(current->next)->next;
free(de);
return head;
}
