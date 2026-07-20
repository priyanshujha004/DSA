class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0; int sum = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int x = (sum%k+k)%k;
            if(mp.find(x)!=mp.end()) count+=mp[x];
            mp[x]++;
        }
        return count;
    }
};