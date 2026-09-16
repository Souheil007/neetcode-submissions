class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n);
        vector<int> v2(n);
        v1[0]=1;
        v2[0]=1;
        vector <int> vf;
        int x=1;
        for (int i=1;i<n;i++){
            v1[i]=nums[i-1]*x;
            x=v1[i];
        }
        int j=1;
        x=1;
        for (int i=n-1;i>0;i--){
            v2[j]=nums[i]*x;
            x=v2[j];
            j++;
        }
        for (int i=0;i<n;i++){
            vf.push_back(v2[n-i-1]*v1[i]);
        }
        return vf;
    }
};