class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back({nums[i],i});
        }
        sort(res.begin(),res.end());
        int i = 0;
        int j = res.size() - 1;
        while (i < j) {
            int sum = res[i].first + res[j].first;
            if (sum == target) {
                return {res[i].second, res[j].second};
            }
            else if (sum < target) {
                i++;
            }
            else {
                j--;
            }
        }
        return {};
    }
};