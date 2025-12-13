#include<iostream>
using namespace std;
void display(int arr[]){
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[5] = {1,4,2,7,46};
    //accessing the elements of array in another func
    //updation pass by value reference
    display(arr);
    change(arr);
    display(arr);
}