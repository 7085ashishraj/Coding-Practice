#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans;
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            ans.push_back(str[i]);
        }
    }
    for(int i=0;i<ans.length()-1;i++){
        for(int j=0;j<ans.length()-1-i;j++){
            if(ans[j]>ans[j+1]){
                swap(ans[j],ans[j+1]);
            }
        }
    }
    for(int i=0;i<ans.length();i++){
        cout<<ans[i]<<" ";
    }
}