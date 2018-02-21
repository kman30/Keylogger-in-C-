/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int max=0;
        if(root==NULL)
            return -1;
        int leftWala=height(root->left);
        int rightWala=height(root->right);
        if(leftWala>rightWala)
            max= leftWala;
        else
            max=rightWala;
        return max+1;
    }