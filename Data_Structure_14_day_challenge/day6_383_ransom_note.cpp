class Solution {
public:
    bool canConstruct(string r,string m) {
       int count[26]={};
        
        for(char c:m)
        {
            count[c-'a']++;
        }
        
        for(char c:r){
           if(!count[c-'a']--)
               return false;
      }
        return true;
    }
};
