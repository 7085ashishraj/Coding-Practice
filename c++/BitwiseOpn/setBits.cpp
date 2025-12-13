#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
    return __builtin_popcount(n);
}

int count_set_bits_2(int n){ //count_set_bits_2 (just naming purpose)
    int cnt = 0;
    while(n>0){
        cnt++;
        n = (n &(n-1));
    }
    return cnt;
}

int main(){
    cout<<count_set_bits(13)<<endl;
    cout<<count_set_bits_2(13)<<endl;

    return 0;
}