class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int leftmostX = max(ax1,bx1);
        int rightmostX = min(ax2,bx2);

        int topmostY = min(ay2,by2);
        int bottommostY = max(ay1,by1);

        int owidth = max(0,rightmostX - leftmostX);
        int oheight = max(0,topmostY - bottommostY);

        int rt1 = (ax2 - ax1) * (ay2 - ay1);
        int rt2 = (bx2 - bx1) * (by2 - by1);

        return (rt1+rt2-(owidth*oheight));
    }
};