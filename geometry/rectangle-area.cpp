class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1,
                    int bx2, int by2) {

        int widthA = ax2 - ax1;
        int heightA = ay2 - ay1;
        int AreaA = widthA * heightA;

        int widthB = bx2 - bx1;
        int heightB = by2 - by1;
        int AreaB = widthB * heightB;
        int left = max(ax1, bx1);
        int right = min(ax2, bx2);
        int overlapx = right - left;

        int bottom = max(ay1, by1);
        int top = min(ay2, by2);
        int overlapy = top - bottom;

        int totaloverlap = overlapx * overlapy;

        return AreaA + AreaB - totaloverlap;
    }
};