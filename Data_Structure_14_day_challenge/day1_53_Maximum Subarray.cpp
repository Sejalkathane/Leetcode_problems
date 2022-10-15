// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         int n=nums.size();
// //         int sum=0,res=INT_MIN;
        
// //         for(int i=0;i<n;i++)
// //         {
// //             sum+=nums[i];
// //             res=max(sum,res);
// //             if(sum < 0) 
// //                 sum = 0;
// //         }
// //         return res;
        
        
        
        
        
//          int res=nums[0];
//         int mxend=nums[0];
        
//         for(int i=1;i<n;i++)
//       {
//           mxend=max(mxend+nums[i],nums[i]);
//           res=max(res,mxend);
//       }
//         return res;
//     }
        
    
// };