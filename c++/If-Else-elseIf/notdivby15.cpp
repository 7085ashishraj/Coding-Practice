#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a integer: ";
cin>>x;
if((x%5==0 || x%3==0) && x%15!=0){
    cout<<"Divisible by 5 or 3 but not by 15";
    }
else{
    cout<<"Not matching conditions";
    }
}

//can also be done by nested if-else condition.
