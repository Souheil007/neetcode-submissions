class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0,x,y;
        int n = heights.size();
        int i=0,j=n-1;
        while(i<j){
            x = min(heights[j],heights[i]);
            y = j-i;
            maxi = max(x*y,maxi);
            if(heights[j]>heights[i])i++;
            else j--;
        }
        return maxi;
    }
};
