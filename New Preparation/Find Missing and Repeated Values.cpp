class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
     
    {
        int n=grid.size();
        int total=n*n;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        int rep=-1,mis=-1;
        for(int i=0;i<=total;i++){
            if(freq[i]==2){
                rep=i;
            }
           else if(freq[i]==0){
            mis=i;
           }
        }
        return {rep,mis};

        
    }
};
