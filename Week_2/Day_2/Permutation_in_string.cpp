class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>f;
        unordered_map<char,int>f2;
        int n = s1.size();
        int m = s2.size();
        
        if(n>m) return false;
           for(char c:s1) {
            f[c]++;
           }
           for(int j = 0 ; j<n ;j++){
            f2[s2[j]]++;
           }
           if(f==f2) return true;
           for (int j = n ; j<m; j++){
            f2[s2[j]]++;
            f2[s2[j-n]]--;
            if(f2[s2[j-n]]==0){
                f2.erase(s2[j-n]);
            }
            if(f==f2) return true;
           }
        return false;
    }
};