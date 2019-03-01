void inOrder(Node *root) {
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL){
            cout<<root->data<<" ";
            return;
        }
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }

}; //End of Solution
