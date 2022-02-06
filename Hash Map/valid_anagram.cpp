 bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        
        map<char, int> s_map, t_map;
        for(int i = 0; i < s.size(); i++){
          
          /* 
          how to check if a key is exist in the map?
          :2 ways to show the key doesn't exist:
          
          1. s_map.count(s[i]) == 0
          2. s_map.find(s[i]) == s_map.end()
          
          */
            
            if (s_map.find(s[i]) == s_map.end()) {
            // not found
              s_map[s[i]] = 1;
            } else {
                //found
               s_map[s[i]] = 1 + s_map[s[i]];
            }
            
            if ( t_map.find(t[i]) == t_map.end() ) {
              t_map[t[i]] = 1;
            } else {
               t_map[t[i]] = 1 + t_map[t[i]]; 
            }
        }
                        
         for (auto it : s_map){
                if (t_map.find(it.first) == t_map.end()) {
                 return false;
                } else {
                    if(t_map[it.first] != it.second) return false;
                }
            }
          /* another way to use iterator
          
                map<char, int>::iterator it = s_map.begin();

                while (it != s_map.end()){
                    if (t_map.find(it->first) == t_map.end()) {
                     return false;
                    } else {
                        if(t_map[it->first] == it->second) it++;
                        else return false;
                    } 
                }
          */
        return true;
    }
        
