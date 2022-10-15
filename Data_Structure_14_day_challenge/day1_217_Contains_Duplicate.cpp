// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
        
// 		sort(nums.begin(), nums.end());
// 		for(int i = 1; i < nums.size(); i++)
// 		{
// 			if(nums[i-1] == nums[i])
// 				return true;
// 		}
// 		return false;
        
//         // if set size is not equal to that then we say that it contain duplicate
//         //        unordered_set<int> s(nums.begin(), nums.end());
//         // return (s.size() != nums.size());
// 	}
// };