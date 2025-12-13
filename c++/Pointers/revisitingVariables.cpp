#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(int)<<" bytes"<<endl;
    // cout<<sizeof(char)<<" bytes"<<endl;
    // cout<<sizeof(bool)<<" bytes"<<endl;
    // cout<<sizeof(float)<<" bytes"<<endl;
    // cout<<sizeof(long long)<<" bytes"<<endl;
    // cout<<sizeof(double)<<" bytes"<<endl;
    // int x = 9;
    // cout<<&x; //0x61ff0c

    //& -> ye oos data type ke value ka address print karata hai!!
    int x = 9;
    int y = 9;
    cout<<&x<<endl;
    cout<<&y;

}