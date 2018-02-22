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
    Node *head=NULL;
    if(headA==NULL)
        return headB;
    if(headB==NULL)
        return headA;
    if(headA->data<headB->data)
        {
        head=headA;
        head->next=MergeLists(headA->next,headB);
    }else
        {
        head=headB;
        headB->next=MergeLists(headA,headB->next);
    }
    return head;
}
