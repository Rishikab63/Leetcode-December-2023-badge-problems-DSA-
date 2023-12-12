//1903. Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {
      int l=num.length()-1;
      
      while(l>=0)
      {
        int n=num[l];
        if(n%2==1) //odd
        { 
          return num.substr(0,l+1);
        }
        l--;
      }
      return "";
    }
};
