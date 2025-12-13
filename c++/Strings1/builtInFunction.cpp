#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "I am a good boy";
    // cout<<str.size()<<endl;
    // cout<<str.length();

    // string str = "abcde";
    // cout<<str<<endl;
    // str.push_back('f');
    // str.push_back('g');
    // str.push_back('h');
    // str.push_back('i');
    // str.push_back('j');

    // cout<<str;

    // string str = "Ashish";
    // str.pop_back();
    // cout<<str;

    // string s = "abc";
    // cout<<s<<endl;
    // s = "xyz"+s;
    // cout<<s<<endl; //append ya add ya modify

    string str = "abcdef";//0 1 2 3 4 5
    cout<<str<<endl;
    //reverse(str.begin(),str.end());
    //reverse(str.begin()+2,str.end()-1);
    reverse(str.begin()+2,str.begin()+5);
    cout<<str;
}