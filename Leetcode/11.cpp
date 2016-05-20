class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=INT32_MIN;
        int i=0, j=height.size()-1;
        while(i<j)
        {
            res = max(res, min(height[i], height[j]) * (j-i) );
            height[i] > height[j] ? --j : ++i;
        }
        return res;
    }
};