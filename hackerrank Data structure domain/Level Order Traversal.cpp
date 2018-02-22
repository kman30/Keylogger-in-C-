/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        if(q.front()->left!=NULL)
            q.push(q.front()->left);
        if(q.front()->right!=NULL)
            q.push(q.front()->right);
        cout<<q.front()->data<<" ";
        q.pop();
    }
  
}
