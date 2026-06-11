class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector<string> ans; 
        string s = ""; 
        int a = 0; 
        int b = 0; 
        helper(ans, s, a, b, n); 
        return ans;
    }

    void helper(vector<string>& v, string str, int o, int c, int N) {
        if (o==N && c==N) {
            v.push_back(str); 
            return;
        }
        if (o<N) {
            string tmp = str; 
            tmp += "("; 
            int oo = o+1; 
            int cc = c; 
            helper(v,tmp,oo,cc,N);
        }
        if (c<o) {
            string t2 = str; 
            t2 += ")"; 
            int oo2 = o; 
            int cc2 = c+1; 
            helper(v,t2,oo2,cc2,N);
        }
    }
};