class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int count = 0;
        int pos = 0;

        for(int i = 0; i<n ; i++){
            int j;
            for(j = pos; j<m; j++){
                if(s[i]==t[j]){
                count++;
                pos =j + 1;
                break;
                }
            }
            
        }
         return count == n;

       
    }
};