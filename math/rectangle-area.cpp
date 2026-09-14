class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1,
                    int bx2, int by2) {

        int widthA = ax2 - ax1;
        int heightA = ay2 - ay1;
        int AreaA = widthA * heightA;//16

        int widthB = bx2 - bx1;
        int heightB = by2 - by1;
        int AreaB = widthB * heightB;//1
        int left = max(ax1, bx1);//3
        int right = min(ax2, bx2);//2
        int overlapx = right - left;//-1

        int bottom = max(ay1, by1);//3
        int top = min(ay2, by2);//2
        int overlapy = top - bottom;//-1

        int totaloverlap = overlapx * overlapy;//1

        return AreaA + AreaB - totaloverlap;
    }
};