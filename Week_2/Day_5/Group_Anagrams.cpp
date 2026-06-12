class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        vector<string>group;
       vector<pair<string,string>>sorted;
       for(string s : strs){
        string ch = s;
        sort(ch.begin(),ch.end());
        sorted.push_back({ch,s});

       }

       sort(sorted.begin(),sorted.end());
       group.push_back(sorted[0].second);

       for(int i = 1;i<sorted.size();i++){
        if(sorted[i].first==sorted[i-1].first){
            group.push_back(sorted[i].second);
        }
        else{
            res.push_back(group);
            group.clear();
            group.push_back(sorted[i].second);
        }
       }
       res.push_back(group);
       return res;
    }
};