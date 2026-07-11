class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> temp(128,-1);

        int maxLen = 0;
        int start = -1;

        for(int i = 0; i < s.length(); i++){
            if(temp[s[i]] > start){
                start = temp[s[i]];
            }
            temp[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }

        return maxLen;
    }
};
