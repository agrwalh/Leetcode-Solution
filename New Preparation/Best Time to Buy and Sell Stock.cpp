class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxp=0;
        int n=prices.size();
        int minprices=INT_MAX;
        for(int i=0;i<n;i++)
        {
            minprices=min(minprices,prices[i]);
            maxp=max(maxp,prices[i]-minprices);
        }
        return maxp;
        
    }
};
