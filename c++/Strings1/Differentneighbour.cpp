// unique element in string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len = str.length();
    int count = 0;
    for(int i=0;i<len;i++){
        if(len==1){
            break;
        }
        if(len==2 && str[0]!=str[1]){
            count = 1;
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==len-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
        //cout<<count;
    }
    cout<<count;
}