/*

Given a string s and a string t, check if s is subsequence of t.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).


Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false

*/

//Method 1: Time Complexity:O(length of s * length of t)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            int found=1;
            for(int j=start;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    found=0;
                    start=j+1;
                    break;
                }
            }
            if(found)
                return false;
        }
        return true;
        
    }
};


// Method 2 Time Complexity: O(length of t)

class Solution {
public:
    bool isSubsequence(string s, string t) {
    int j=0;
    for(int i=0;i<t.size();i++)
    {
      if(j<s.size() && t[i]==s[j])
          j++;
    }
    if(j==s.size()) return true;
    else return false;
   }
 };
