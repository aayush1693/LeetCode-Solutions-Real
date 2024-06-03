class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans= INT_MIN;
        int n= prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=1; i<n; i++){
            profit=prices[i]-mini;
            mini=min(mini,prices[i]);
            ans=max(ans,profit);
        }
        if(ans<0) return 0;
        return ans;
    }
};