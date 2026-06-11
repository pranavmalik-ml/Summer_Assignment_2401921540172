class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        string res;
      while(j<n){
        while(j<n && s[j]!=' '){
            j++;
        }
        reverse(s.begin()+i,s.begin()+j);
        res+=s.substr(i,j-i);
        if(j<n)
        res.push_back(' ');
        i = j+1;
        j = j+1;
      }  
      return res;
    }
};