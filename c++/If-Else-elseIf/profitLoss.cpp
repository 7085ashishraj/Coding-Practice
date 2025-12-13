#include<iostream>
using namespace std;
int main(){
    cout<<"Enter cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter selling price: ";
    int sp;
    cin>>sp;
    if(cp>sp){
        cout<<"loss"<<endl;
        cout<<"Loss of Rs: ";
        cout<<cp-sp;
    }
    else if(sp==cp){
        cout<<"neither profit nor loss";
    }
    else{
        cout<<"Profit";
        cout<<"Profit of Rs: ";
        cout<<sp-cp;
    }
     
}