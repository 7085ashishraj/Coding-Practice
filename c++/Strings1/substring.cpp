#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len = str.length();
    // s.substring(idx,len)
    cout<<str.substr(len/2);
}