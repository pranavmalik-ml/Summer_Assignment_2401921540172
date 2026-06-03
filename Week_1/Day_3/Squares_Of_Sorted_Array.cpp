class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        int i = 0;
        int j = nums.size()-1;
        int loc = nums.size()-1;
        while(i<=j){
            int front = nums[i]*nums[i];
            int back = nums[j]*nums[j];
            if(front > back){
                res[loc--]= front;
                i++;
            }
            if(back>=front){
                res[loc--]=back;
                j--;
            }
        }
        return res;
    }
};