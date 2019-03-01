 void levelOrder(Node * root) {
        if(root==nullptr)
            return;
        queue<Node*>a;
        a.push(root);
        while(!a.empty()){
            Node *temp=a.front();
            a.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
                a.push(temp->left);
            if(temp->right!=NULL)
                a.push(temp->right);
        }


    }
