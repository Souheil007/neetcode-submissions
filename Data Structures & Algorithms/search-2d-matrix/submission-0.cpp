class Solution {
public:
    bool rsearch(vector<int>& nums, int l, int r, int target) {
        if (l > r) {
            return false;
        }

        int mindex = (l + r) / 2;

        if (nums[mindex] == target) {
            return true;
        }

        if (nums[mindex] > target) {
            return rsearch(nums, l, mindex - 1, target);
        }

        return rsearch(nums, mindex + 1, r, target);
    }
    bool vectorsearch(vector<vector<int>>& matrix,int l, int r, int target){
        if (l > r) {
                return false;
            }
        int mindex = (l + r) / 2;
        vector<int> v = matrix[mindex];
        if (v[0]<=target && v[v.size()-1]>=target){
            return rsearch(v, 0, v.size()-1, target);
        }
        else {
            if (target < v[0]) {
                return vectorsearch(matrix, l,  mindex-1,  target);
            }
            else return vectorsearch(matrix, mindex+1,  r,  target);
        }

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return vectorsearch(matrix,0,matrix.size()-1,target);
    }
};
