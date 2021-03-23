class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int sell=0;
        int buy=0;
        int i=0;
        int n=prices.size();
        while(i<n-1){
            while(i<n-1 && prices[i]>=prices[i+1]){
                i++;
            }
            buy=prices[i];
            while(i<n-1 && prices[i]<prices[i+1]){
                i++;
            }
            sell=prices[i];
            ans=ans+(sell-buy);
        }
        return ans;
    }
};
