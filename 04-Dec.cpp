//Problem-2264 Largest 3-Same-Digit Number in String

//CODE- 
class Solution {
public:
    string largestGoodInteger(string num) {
       
       int j=0;
        string ans="";
        string fst="";
        for(int i=0;i<num.length();i++)
        {
            j=i+1;
            fst="";
            if(num[i]==num[j] && num[j]==num[j+1])
            {
                fst+=num[i];
                fst+=num[j];
                fst+=num[j+1];
                i=i+2;
               
                if(ans=="" || ans[0]<fst[0])
                {
                    ans=fst;
                }
            }
        }
        return ans;
    }
};
