/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node *newNode=new node;
    newNode->data=value;
    if(root==NULL){
        root=newNode;
        return root;}
    
    node *current=root;
    node *parent;
    while(current!=NULL)
        {
        parent=current;
        if(value<parent->data)
            {
            current=current->left;
           
        }
        else
            current=current->right;
        
    }
    if(value<=parent->data)
        parent->left=newNode;
    else
        parent->right=newNode;
    

   return root;
}
