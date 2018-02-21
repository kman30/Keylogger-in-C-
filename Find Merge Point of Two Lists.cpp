/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. {
    while (headA) {
        Node *tmp = headA->next;
        headA->next = NULL;
        headA = tmp;
    }

    while (headB) {
        if (headB->next == NULL) {
            return headB->data;
        }
        headB = headB->next;
    }

    return 0;
}