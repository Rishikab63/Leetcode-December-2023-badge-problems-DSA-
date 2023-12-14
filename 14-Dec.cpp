//2482. Difference Between Ones and Zeros in Row and Column

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();

        vector<int> onesrow(r);
        vector<int> onescol(c);
        vector<int> zerorow(r);
        vector<int> zerocol(c);

        //count of ones and zero
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    onesrow[i]++;
                    onescol[j]++;
                }
                if(grid[i][j]==0)
                {
                    zerorow[i]++;
                    zerocol[j]++;
                }
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<r;i++)
        {
            vector<int> v;
            for(int j=0;j<c;j++)
            {
                int val=onesrow[i]+onescol[j]-zerorow[i]-zerocol[j];
                v.push_back(val);
            }
            ans.push_back(v);
        }

        return ans;

    }
};
