//1436. Destination City


#include<unordered_map>
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        unordered_map<string,int> m;
        for(int i=0;i<paths.size();i++)
        {
            m[paths[i][0]]++;
        }
        string ans="";
        for(int i=0;i<paths.size();i++)
        {
            if(m[paths[i][1]]==0)
            {
                ans=paths[i][1];
            }
        }
        return ans;
    }
};
