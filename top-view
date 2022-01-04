map<int, vector<int>> get_vertical_order(Node* root, int hd, map<int, vector<int>> &m) 
        {
            m[hd].push_back(root->data);
            if (root->left != NULL) get_vertical_order(root->left, hd-1, m);
            if (root->right != NULL)get_vertical_order(root->right, hd+1, m);
            return m;
        }       
        
map<int,int> get_horizontal_order(Node* root, int vd, map<int,int> &m) 
        {
            m[root->data]= vd;
            if (root->left != NULL) get_horizontal_order(root->left, vd-1, m);
            if (root->right != NULL)get_horizontal_order(root->right, vd-1, m);
            return m;
        }        

void topView(Node* root)
        {
            map<int, vector<int>> hd_map; 
            map<int, int> vd_map; 
            int hd = 0; 
            int vd = 0; 
            hd_map = get_vertical_order(root, hd, hd_map);
            vd_map = get_horizontal_order(root, vd, vd_map);
            
            map< int,vector<int> > :: iterator it; 
            for (it=hd_map.begin(); it!=hd_map.end(); it++){
                int max_value = vd_map[it->second[0]] ;
                int valup = 0;
                for (int i = 0; i < it->second.size(); i++) {
                    if(vd_map[it->second[i]] >= max_value){
                        max_value = vd_map[it->second[i]];
                        valup = it->second[i];
                    }
                }
                cout << valup << " ";
            }
        }
