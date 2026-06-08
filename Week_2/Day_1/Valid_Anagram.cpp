class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>f1;
       unordered_map<char,int>f2;

       for(int i = 0; i<s.size(); i++){
        f1[s[i]]++;
       }
       for(int j = 0; j<t.size(); j++){
        f2[t[j]]++;
       }

       if(f1==f2) return true;
       return false;
    }
};