class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>str;
        string res = "";
        int count = 0;
        for(char c : s){
            if(isdigit(c)){
                count = count * 10 + (c - '0');
            }
            else if( c == '['){
                num.push(count);
                str.push(res);
                count = 0;
                res = "";
            }
            else if(c == ']'){
                int again = num.top();
                num.pop();

                string pre = str.top();
                str.pop();

                string newly = "";
                for(int i = 0; i<again; i++){
                    newly += res;
                }
                res = pre + newly;
            }
            else{
                res.push_back(c);
            }
        }
         return res;   

    }
};