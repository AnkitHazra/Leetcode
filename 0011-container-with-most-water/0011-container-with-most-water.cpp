class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int water=w*h;
            area=max(area,water);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};