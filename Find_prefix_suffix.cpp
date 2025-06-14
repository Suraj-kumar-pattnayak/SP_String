#include<bits/stdc++.h>
using namespace std;

void findPrefix (string str){

    cout<<"Prefix of string: ";
    for(int i=0; i<str.length(); i++)
    {
        cout<<str.substr(0, i+1)<<" ";
    }
    cout<<"\n";
}
void findSuffix (string str){

    cout<<"Suffix of string: ";
    for(int i= str.length()-1; i>=0; i--)
    {
        cout<<str.substr(i)<<" ";
    }
    cout<<"\n";
}
int main(){

    string str = "hello";
    findPrefix(str);
    findSuffix(str);
    return 0;
}