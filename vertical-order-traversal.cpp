class Node {
    public:
        int data;
        Node *left;
        Node *right;
};

void get_vertical_order(Node* root, int hd, map<int,vector<int>> &m) //loop until assigning each node its corresponding hd value
    {
        if (root == NULL)
            return;
        m[hd].push_back(root->data);
        get_vertical_order(root->left, hd-1, m);
        get_vertical_order(root->right, hd+1, m);
    }        

void vertical_order_traversal(Node* root)
    {
        map<int, vector<int>> hd_map; //to store hd values ..-2,-1,0,1,2... as int and nodes having them as vectors
        int hd = 0; //for root 
        get_vertical_order(root, hd, hd_map);
        
        map< int,vector<int> > :: iterator it; 
        for (it=hd_map.begin(); it!=hd_map.end(); it++)
        {
            for (int i=0; i<it->second.size(); ++i)
                cout << it->second[i] << " ";
            cout << endl;
        }
    }

//in order to run this algo call vertical_order_traversal() in the main func
