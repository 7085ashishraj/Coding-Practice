#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int n = 3;

void generate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s=="") generate(s+'1',n);
    else if(s[s.length()-1]=='0') generate(s+'1',n);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    generate("",n);
}