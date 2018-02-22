/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
   static node *temp=root;
    if(root==NULL)
        return;
    top_view(root->left);
    cout<<root->data<<" ";
    if(root==temp){
    root=root->right;
    while(root!=NULL)
        {
        cout<<root->data<<" ";
        root=root->right;
    }}
  
}