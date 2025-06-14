#include<bits/stdc++.h>
using namespace std;
int main(){

    string num ="52"; //5   so 265            "5459762";  //7
    // i have to find the last occurence of any odd  num, so greatest odd autimatically will be founded.
    int flag = -1;
    for(int i=num.length()- 1; i>=0; i--)
    {
        if( int(num[i]) %2 != 0){
            flag = i;
            break;
        }

    }

    if(flag == -1) cout<<"";   //edge case if all are even number
    else {
    string ans;
    for(int i=0; i<flag +1; i++){
        ans += num[i];
    }

    cout<<ans<<" ";
    }
    return 0;
}

// leetcode problem=>   1903. Largest Odd Number in String

//Link =>  https://leetcode.com/problems/largest-odd-number-in-string/submissions/1663588421/
// https://leetcode.com/problems/largest-odd-number-in-string/submissions/1663591931/