//1582. Special Positions in a Binary Matrix


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        //row and col-
        int r=mat.size();
        int c=mat[0].size();
        //vector for storing number of 1 in each row and col
        vector<int> row(r); //if not declaring size of vector then giving runtime error
        vector<int> col(c);
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==1)
                {
                    //increasing count in vector
                    row[i]++;
                    col[j]++;
                }
            }
        }

        //checking and increasing ans and returning it
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                //checking 3 things- 1)that elem at i,j is 1; 
                //2)row at that pos is 1; 
                //3) col at that pos is 1
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)
                {
                    ans++;
                }
            }
        }

        return ans;

    }
};
