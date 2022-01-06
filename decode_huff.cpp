// decodes string according to the huffman binary code of a given tree

void decode_huff(node * root, string s) {
    
    node *temp = root;
    while(!s.empty()){ 
            if (s[0] == '0') {
            s = s.substr(1);
            temp = temp->left;
        }
        else if (s[0] == '1') {
            s = s.substr(1);
            temp = temp->right;
            
        }      
        if (temp->data != '\0') {
                cout << temp->data;
                temp = root;
        }
    }
}

// reminder!!
// how to construct binary codes of nodes of a binary tree?

void code_huff(node *root, string code, map<char,string> &mp) {
    
  	if(root == NULL)
        return;
    
  	if(root->data != '\0') {
        mp[root->data] = code;
    }
  
    code_huff(root->left, code + '0', mp);
    code_huff(root->right, code + '1', mp);
        
}
