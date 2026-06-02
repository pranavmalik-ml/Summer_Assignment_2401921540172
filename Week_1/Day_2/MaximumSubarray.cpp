class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int bestending = nums[0];
      int indexsum = nums[0];
      for(int i =1; i<nums.size();i++){
         bestending = max(nums[i],nums[i]+bestending);
         indexsum = max(indexsum,bestending);
      }
      return indexsum;  
    }
};