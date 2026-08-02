class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0; int ten = 0; int twenty = 0;
        bool possible = true;
        for (int idx = 0; idx < bills.size(); idx++) {
            if (bills[idx] == 5)
                five++;
            else if (bills[idx] == 10) {
                ten++;
                if (five > 0)
                    five--;
                else {
                    possible = false;
                    break;
                }
            }
            else {
                twenty++;
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five = five - 3;
                }
                else{
                    possible = false;
                    break;
                }
            }
        }
        return possible;
    }
};