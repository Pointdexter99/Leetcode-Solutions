class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        int diff=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
                diff+=prices[i]-prices[i-1];
        }
        return diff;
    }
};
