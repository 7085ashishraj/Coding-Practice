#include<iostream>
using namespace std;
int main(){
    int arr[26];
    int temp;
    arr[0] = 100;
    arr[25] = 200;
    temp = arr[25];
    arr[25] = arr[0];
    arr[0] = temp;
    cout<<endl<<arr[0]<<" "<<arr[25];
}