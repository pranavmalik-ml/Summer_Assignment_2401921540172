class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int , int>f;
       for(int count : nums){
        f[count]+=1;
        
       } 
       for(auto& pair : f){
        if(pair.second >=2){
            return true;
        }
       }
       return false;
    }
};