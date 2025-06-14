#include<bits/stdc++.h>
using namespace std;
int main(){

    // if sort only found common between first and last string element 
    // O(nlogn  + M)  M -> size of shortest string between first and last
  vector<string>strs = {"flower","flow","flight"};    // strs = {"dog","racecar","car"}
//   sort(strs.begin(), strs.end());
  
// //   for(int i=0; i<strs.size(); i++)
// //   {
// //     cout<<strs[i]<<" ";
// //   }
//     string first = strs[0];
//     string last = strs[strs.size()-1];
//     int minLen = min( strs[0].length(), strs[strs.size()-1].length());
//     // cout<< minLen;

//     string ans;
//     for(int i=0; i<minLen; i++)
//     {
//         if(first[i] != last[i]) break;

//         ans += first[i];
//     }
//     cout<<ans;
//     return 0;

    string prefix  = strs[0];
    for(int i=1; i<strs.size(); i++)
    {
     int minLen = min(prefix.length(), strs[i].length());
     int j= 0;
     while(j < minLen && prefix[j] == strs[i][j]) j++;

     prefix = prefix.substr(0, j);
    // if (prefix.empty()) return "";
    }

    cout<<prefix;
    return 0;
    

}




// Leetcode problem => 14. Longest Common Prefix

//Link  =>   https://leetcode.com/problems/longest-common-prefix/submissions/1663713214/

// https://leetcode.com/problems/longest-common-prefix/submissions/1663620737/
