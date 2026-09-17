class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1,x,y,water,max=0;
        while (i<j){
            x=heights[i];
            y=heights[j];
            water=min(x,y)*(j-i);
            if (water>max)max=water;
            if(x==min(x,y))i++;
            else {j--;}
        }
        return max;
    }
};
