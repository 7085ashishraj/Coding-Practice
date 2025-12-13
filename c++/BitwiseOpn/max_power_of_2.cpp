#include<iostream>
using namespace std;

int main(){
 // jab 2 se chhoti power nikalni ho
    int x = 100;
    int temp;
    while(x!=0){
        temp = x;
        x = x & (x-1);
    }
    cout<<temp;

    //agar 2 se just badi nikalni ho...seedha 2 se multiply kar do
    return 0;
}