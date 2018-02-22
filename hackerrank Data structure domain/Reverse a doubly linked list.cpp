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
Node* Reverse(Node* node)
{
    // Complete this function
    // Do not write the main method. 
// If empty list, return
  if (!node) return NULL;
  
  // Otherwise, swap the next and prev
  Node *temp = node->next;
  node->next = node->prev;
  node->prev = temp;
  
  // If the prev is now NULL, the list
  // has been fully reversed
  if (!node->prev) return node;
  
  // Otherwise, keep going
  return Reverse(node->prev);
}