/*

Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/


Method 1:Using Map

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(auto i: s)
        {
            hash[i]++;
        }
        for(auto j:t)
        {
            if( (hash.find(j)==hash.end()) || hash[j]<=0)
            {
                return false;
            }
            hash[j]--;
        }
        return true;
      }
     };
        
        
        Method2:Using hash->Time Complexity:O(n)
        
        class Solution {
        public:
          bool isAnagram(string s, string t) {
            vector<int> arr(26,0);     //1string
            vector<int> arr1(26,0);  //2string
            if(s.size()!=t.size())
                return false;
            int i=0;
            for(;i<t.size();i++)
            {
                arr[s[i]-'a']++;
                arr1[t[i]-'a']++;
            }
            if(arr==arr1)
                return true;
            cout<<"No";
            return false;
        }
    };
    
    
    You can use single array or vector also;
    Just Increment the value of s in arr & decrement the value of t in arr;
    The result contains all zero,Then it's a valid anagram
