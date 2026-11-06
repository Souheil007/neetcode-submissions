class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        vector<int> v;
        v = rmatrix(matrix,0 , matrix.size()-1, target);
        if (rsearch(v,0,v.size()-1,target) != -1) return true;
        return false;
    }
    vector<int> rmatrix(vector<vector<int>>& matrix, int i, int n, int target) {
    if (i > n) return {};

    int mid = i + (n-i)/2;

    if (target < matrix[mid][0])
        return rmatrix(matrix, i, mid-1, target);

    if (mid < n && target >= matrix[mid+1][0])
        return rmatrix(matrix, mid+1, n, target);

    return matrix[mid];
    }

    int rsearch(vector<int>& nums, int l , int r, int target){
        if (l>r) return -1;
        int mid = (l + r) / 2;
        if (nums[mid] == target)return mid;
        if (target < nums[mid]) return rsearch(nums,l,mid-1,target);
        return rsearch(nums,mid+1,r,target);
    }
};
