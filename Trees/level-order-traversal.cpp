    #include<queue>

    void levelOrder(Node* root)
    {

        queue<Node*> q;
        Node *temp = root;
        q.push(root);

        while(!q.empty())
        { 
                cout<<temp->data<<" ";
                q.pop();
                
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);

                temp = q.front();
        }
    }
    
   
