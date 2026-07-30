class Solution {
public:
    int minimumPushes(string word) {
        int x = word.size();
        if(x<=8) return word.size();
        else {
            int y = x%8;
            int rem = x - y;
            int z = rem / 8;

            return 8 * (z*(z+1)/2) + y*(z+1);
        }
        return 0;
    }
};