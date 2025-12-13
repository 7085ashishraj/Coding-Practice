#include<bits/stdc++.h>
using namespace std;

int foldingmthd(int i,int m){
    int sum = 0;
    while(i>0){
        sum += i%10;
        i/=10;
    }
    return sum%m;
}

int main(){
    int keys[] = {1,2,3,4,5,6};
    int m = 10;
    cout<<"Hash value is: ";
    for(int i : keys){
        int hashvalue = foldingmthd(i,m);
        cout<<i<<" "<<hashvalue;
    }
    return 0;
}