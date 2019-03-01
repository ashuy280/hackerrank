Node * insert(Node * root, int value) {
      if (root == NULL) {
        root=new Node(value);
      } else if (root->data >= value)
        root->left = insert(root->left, value);
      else
        root->right = insert(root->right, value);

      return root;
    }
