class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int high = k-1;
        double sum = 0;
        
       
         for(int i = low; i<= high; i++){
            sum = sum + nums[i];

        }
        double res = sum;

     while(high+1< nums.size()) {
       
      
            sum = sum-nums[low]+nums[high+1];
            low++;
            high++;
            res = max(res,sum);
     }
     double average = res/k;
     return average;
    }
};