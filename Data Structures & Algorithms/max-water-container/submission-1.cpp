class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int area=0;
        while(left<right){
            int h= min(heights[left],heights[right]);
            area = max(area, h*(right-left));
            if(heights[right] > heights[left]) left++;
            else right--;
        }
        return area;
        
    }
};
