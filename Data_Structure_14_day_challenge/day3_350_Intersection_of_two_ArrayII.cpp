class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{
//          unordered_set<int> s;
//         int m=nums1.size();

//    for (int i = 0; i < m; i++)
//    {
//       s.insert(nums1[i]);
//    }

//      // int res = 0;
//      int n=nums2.size();
//    for (int i = 0; i < n; i++)
//    {
//       if (s.find(nums2[i]) != s.end())
//       {
//          cout<<nums2[i]<<" ";
//          s.erase(nums2[i]);
//       }
//    }
        
         unordered_map<int, int> freq;
        vector<int> res;
        
        for (auto num : nums1) freq[num]++;
        
        for (auto num : nums2) {
            if (freq[num]) {
                res.push_back(num);
                freq[num]--;
            }
        }
        
        return res;
    }

    
};