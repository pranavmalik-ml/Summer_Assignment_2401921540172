class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i : nums1){
            int ind = -1;
            for(int j = 0; j< nums2.size(); j++){
                if(nums2[j]==i){
                ind = j;
                break;
                }
            }
            int elem = -1;
            for(int j = ind + 1; j < nums2.size(); j++ ){
                if(nums2[j]>i){
                    elem = nums2[j];
                    break;
                }
            }
            res.push_back(elem);
        }
        return  res;
    }
};