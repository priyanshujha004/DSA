class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0; int end = 0;
        unordered_map<char, int> mp;
        int maxlen = 0; int count = 0;
        while (end < s.size()) {
            mp[s[end]]++; count++;
            while (mp.size() != count && start<s.size()){
                mp[s[start]]--;
                if(mp[s[start]]==0) mp.erase(s[start]);
                count--;
                start++;
            }
            maxlen = max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};