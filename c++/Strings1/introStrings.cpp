#include<iostream>
using namespace std;
int main(){
    char str[] = {'a','b','c','d','e','f'};
    // for(int i=0;str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    // }

    //cout<<str<<endl;

    // '\0' ka proof
    cout<<(int)(str[6]);
}