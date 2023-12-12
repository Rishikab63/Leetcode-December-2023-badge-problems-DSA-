//867. Transpose Matrix

// #include<vector>
// #include<algorithm>
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // int row=matrix.size();
        // int col=matrix[0].size();
        // vector<vector<int>> ans(col, vector<int>(row, 0));
        // for(int i=0;i<col;i++)
        // {
        //     for(int j=0;j<row;j++)
        //     {
        //         ans[i][j]=matrix[j][i];
        //     }
        // }
        // return ans;

        
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<c;i++)
        {
            vector<int> v;
            for(int j=0;j<r;j++)
            {
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        } 
        return ans;
    }
};

//   vector<vector<int>> ans;
//         int r=matrix.size();
//         int c=matrix[0].size();
//         for(int i=0;i<c;i++){
//             vector<int> a1;
//             for(int j=0;j<r;j++){
//                 int elm=matrix[j][i];
//                 a1.push_back(elm); //1d vector
//             }
//             ans.push_back(a1);  //2d vector
//         }
//         return ans;
