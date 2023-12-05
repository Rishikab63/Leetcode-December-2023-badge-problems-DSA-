

//PROBLEM-1688. Count of Matches in Tournament

//CODE-
class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n>1)
        {
            if(n%2==0) //even
            {
                match+=n/2;
                n=n/2;
            }
            else //odd
            {
                match+=(n-1)/2;
                n=((n-1)/2) + 1;
            }
        }

        return match;
    }
};
