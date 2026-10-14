class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        vector<int> check(26,0);
        for (int i = 0; i < s.length(); i++){
            check[s[i] - 'a']++;
        }

        for (int i = 0; i < t.length(); i++){
            check[t[i] - 'a']--;
            
            if (check[t[i] - 'a'] < 0){
            return false;
            }  
        }   
        
    return true;
    }
};
