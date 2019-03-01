 void postOrder(Node *root) {
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL){
            cout<<root->data<<" ";
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
