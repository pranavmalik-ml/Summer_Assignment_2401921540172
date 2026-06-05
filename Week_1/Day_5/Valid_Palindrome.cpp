class Solution {
public:
    bool isPalindrome(string s) {
        string news = "";
        for(int i =0; i<s.size(); i++ ){
           if(isalnum(s[i])){
            news.push_back(tolower(s[i]));
           } 
        }
        string rev=news;
         reverse(news.begin(),news.end());
        if(rev == news) return true;
        return false;
    }

};