class Solution {
public:
    bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         if(s==t)
//              return true;
//         else
//             return false;
        
        
        
       if (s==t) return true;
        
        if (s.size()!=t.size()) return false;
        
        unordered_map <char, int> umap;
        for (int i=0; i<s.size(); i++) {
            umap[s[i]]++;
            umap[t[i]]--;
        }
        
        for (auto it: umap) {
            if (it.second) return false;
        }
        
        return true;
    }
};