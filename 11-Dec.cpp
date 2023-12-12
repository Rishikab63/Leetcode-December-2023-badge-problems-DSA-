//1287. Element Appearing More Than 25% In Sorted Array

#include<unordered_map>
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        int maxocc=INT_MIN;
        int ans;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
            maxocc=max(maxocc,m[arr[i]]);
        }
        for(auto i:m)
        {
            if(i.second==maxocc)
            {
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};
