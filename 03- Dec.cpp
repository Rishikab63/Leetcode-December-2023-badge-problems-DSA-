//1266. Minimum Time Visiting All Points

//CODE- 
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i=0,s=0,d1,d2,d;
        for(int j=1;j<points.size();j++)
        {
            d1=points[i][0]-points[j][0];
            d2=points[i][1]-points[j][1];
            d=max(abs(d1),abs(d2));
            s=s+d;
            i++;
        }
        return s;
    }
};
