class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=0;
        int sum=0;
        for (int i=1;i<prices.size();i++){
            if (prices[i]<mini){
                mini=prices[i];
                maxi=0;
            }
            else maxi=prices[i];
            if (maxi-mini>sum)sum=maxi-mini;
        }
        return sum;

    }
};
