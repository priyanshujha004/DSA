class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
        {'I', 1}, {'V', 5}, {'X', 10}, 
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int curr = 0; int prev = 0; int sum = 0;
        for(int idx = s.size()-1; idx>=0; idx--){
            curr = mp[s[idx]];
            if(idx==s.size()-1) {
                sum+= mp[s[idx]]; 
                curr = mp[s[idx]]; 
            }
            else {
                if(curr<prev) sum-= mp[s[idx]];
                else if(curr>=prev) sum+= mp[s[idx]]; 
            }
            prev = mp[s[idx]]; 
        }
        return sum;
    }
};