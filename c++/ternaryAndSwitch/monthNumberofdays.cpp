#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number: ";
    cin>>x;
    switch(x){
        case 1:
            cout<<"No of days is 31";//jan
            break;
        case 2:
            cout<<"No of days is 28";//Feb
            break;
        case 3:
            cout<<"No of days is 31";//Mar
            break;
        case 4:
            cout<<"No of days is 30";//Apr
            break;
        case 5:
            cout<<"No of days is 31";//May
            break;
        case 6:
            cout<<"No of days is 30";//June
            break;
        case 7:
            cout<<"No of days is 31";//July
            break;
        case 8:
            cout<<"No of days is 31";//Aug
            break;
        case 9:
            cout<<"No of days is 30";//Sept
            break;
        case 10:
            cout<<"No of days is 31";//Oct
            break;
        case 11:
            cout<<"No of days is 30";//Nov
            break;
        case 12:
            cout<<"No of days is 31";//Dec
            break;
        default :
            cout<<"Invalid matching conditions";
    }
}