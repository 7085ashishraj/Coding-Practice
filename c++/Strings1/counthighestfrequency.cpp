#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    // string str;
    // getline(cin,str);
    // int max = 0;
    // for(int i=0;i<str.length();i++){
    //     char ch = str[i];
    //     int count = 1;
    //     for(int j=i+1;j<str.length();j++){
    //         if(str[j]==str[i]) count++;
    //     }
    //     if(max<count) max = count;
    // }

    // for(int i=0;i<str.length();i++){
    //     char ch = str[i];
    //     int count = 1;
    //     for(int j=i+1;j<str.length();j++){
    //         if(str[j]==str[i]) count++;
    //     }
    //     if(count==max){
    //         cout<<ch<<" "<<max<<endl;
    //     }
    // }

    string s = "raghav";
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx = arr[i];
    }

    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    
}