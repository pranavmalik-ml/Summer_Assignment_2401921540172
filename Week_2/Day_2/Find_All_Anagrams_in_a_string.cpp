class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char,int>f;
        unordered_map<char,int>f2;
        int n = p.size();
        int m = s.size();
        vector<int>res;
        if(n>m) return res;
           for(char c:p) {
            f[c]++;
           }
           for(int j = 0 ; j<n ;j++){
            f2[s[j]]++;
           }
           if(f==f2) res.push_back(0);
           for (int j = n ; j<m; j++){
            f2[s[j]]++;
            f2[s[j-n]]--;
            if(f2[s[j-n]]==0){
                f2.erase(s[j-n]);
            }
            if(f==f2) 
          res.push_back(j-n+1);
           }
        return res;
    }
};