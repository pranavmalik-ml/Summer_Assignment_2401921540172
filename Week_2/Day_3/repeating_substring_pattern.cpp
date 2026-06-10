class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0)
                continue;
            string p = s.substr(0, len);
            string f = "";

            int Count = n / len;

            for (int i = 0; i < Count; i++) {
                f += p;
            }

            if (f == s)
                return true;
        }

        return false;
    }
};