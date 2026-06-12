class Solution {
public:
    int compress(vector<char>& chars) {
   
      int i =0;
      for(int j = 0; j<chars.size();){
        char curr = chars[j];
         int length = 0;
      
      while(j<chars.size() && chars[j]==curr){
        j++;
        length ++;
        }
        chars[i++]= curr;
        if(length>1){
             vector<char>res;
        while(length>0){
            res.push_back('0'+(length %10));
            length /=10;
        }
        reverse(res.begin(),res.end());
        for(char c : res){
            chars[i++]=c;
        }
        }
      }
      return i;
    }
};