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
    if (!head) {
        return head;
    }
    Node* res = head;
    while (head->next) {
        if (head->next->data == head->data) {
            Node* toDelete = head->next;
            head->next = head->next->next;
            delete toDelete;
        }
        else {
            head = head->next;
        }
    }
    return res;
    
}