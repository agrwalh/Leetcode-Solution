class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) 
    {
        int m=fruits.size();
        int n=baskets.size();
        vector<bool>used(m,false);
        int ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!used[j] && baskets[j]>=fruits[i]){
                    used[j]=true;
                    ans--;
                    break;
                }

            }
        }
        return ans;
        
    }
};
