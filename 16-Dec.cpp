//242. Valid Anagram

#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        if(s.length() != t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            m2[t[i]]++;
        }
       
        for(auto i:m1)
        {
            cout<<i.first<<endl;
            if(m1[i.first]!=m2[i.first])
                return false;   
        }

        return true;

    }
};
