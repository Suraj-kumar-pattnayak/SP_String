#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "anagram";
    string t = "nagaram";
    if(s.length() != t.length())   { cout<<"Not Valid Anagram";   return 0;}
    // //if sort , then check directly if both are same or not
    // //O(NlogN) N-> size of string
    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());
    // if(s == t) cout<<"Valid Anagram";
    // else cout<<"Not Valid Anagram";
    // return 0;

    //hashmap for frequency
    //O(N + K)  => O(N)  ,  N-> size of s and t string, k-> size of hashmap, max to 26 so fix
    //SC O(K) => O(1)  , k is fixed ig
    unordered_map<char, int>umap;
    
    for(int i=0; i<s.length(); i++)
    {
        umap[s[i]]++;
    }

                                                                        // for(auto it : umap)
                                                                        // {
                                                                        //     cout<<it.first<<""<<it.second<<" ";
                                                                        // }
    
    //removing  those frequency in string t for making zero freq;
    for(int i=0; i<t.length(); i++)
    {
        umap[t[i]]--;
    }

                                                                        // for(auto it : umap)
                                                                        // {
                                                                        //     cout<<it.first<<""<<it.second<<" ";
                                                                        // }
    for(auto it : umap)
    {
        if(it.second != 0) { cout<<"Not Valid Anagram";   return 0;}
    }
    cout<< "Valid Anagram";
}

// Leetcode Problem =>  242. Valid Anagram

//  https://leetcode.com/problems/valid-anagram/submissions/1663760277/



//https://leetcode.com/problems/valid-anagram/submissions/1663733646/