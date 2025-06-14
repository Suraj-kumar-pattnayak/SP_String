#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "the sky is blue";

    stack<string>st;
    s += " ";
    // cout<<s<<" ";
    string str;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            st.push(str);
            str = "";
        }
        else str += s[i];
    }

    string ans;
    while(st.size() != 1){
        ans += st.top()+ " ";
        st.pop();
    }
    ans += st.top();

    cout<<ans<<" ";
    return 0;
}


//leetcode prob =>   151. Reverse Words in a String

//Link =>  https://leetcode.com/problems/reverse-words-in-a-string/submissions/1663557715/