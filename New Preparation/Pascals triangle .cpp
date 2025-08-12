class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>tr(numRows);
        for(int i=0;i<numRows;i++)
        {
            tr[i].resize(i+1,1);
            for(int j=1;j<i;j++){
                tr[i][j]=tr[i-1][j-1]+tr[i-1][j];
            }


        }
        return tr;

    }
};
