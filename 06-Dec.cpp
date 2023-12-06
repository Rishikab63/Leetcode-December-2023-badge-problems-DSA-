//PROBLEM- 1716. Calculate Money in Leetcode Bank

//CODE-

class Solution {
public:
    int totalMoney(int n) {
        int cm=1,c=1,s=0;
        for(int k=1;k<=n;k++)
        {
            if(c!=1 && (c-cm)%7==0)
            {
                cm++;
                c=cm;
            }
            s+=c;
            c++;
        }
        return s;
    }
};
