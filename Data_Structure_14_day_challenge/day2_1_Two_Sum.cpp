// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
// //     unordered_map<int, int> mp;
// //     for (int i = 0; i < nums.size(); ++i) {
// //       if (mp.count(target - nums[i])) {
// //         return {mp[target - nums[i]], i};
// //       }
// //       tmp[nums[i]] = i;
// //     }
// //     return {-1, -1};
      
// //     }
        
        
//         vector<int>v;
        
//         unordered_map<int,int>mp;
        
//         for(int i=0;i<nums.size();++i){
//             if(mp.find(target-nums[i])!=mp.end()){
//                 v.push_back(i);
//                 v.push_back(mp[target-nums[i]]);
//                 return v;
//             }
//             mp[nums[i]]=i;
//         }
            
//      return v;
//     }
            
// };