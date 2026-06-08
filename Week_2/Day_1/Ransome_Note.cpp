class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int> f;
       
      for(char m : magazine){
        f[m]++;
      }
      for(char r : ransomNote){
        if(f[r]==0){ 
            return false;
        }

         f[r]--;
      } 
      
      return true;
    }
};