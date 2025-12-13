#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,6};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
    cout<<*ptr<<" "; //Ultimate chij
    ptr++; //ye address +4 karega
    }
    ptr = arr; // ptr is pointing to first element
    // ptr[0] = 8;
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }
    *ptr = 8;//ptr[0] = 8
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9;
    ptr--; // ptr is pointing to 1st element
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; //ptr is pointing to 1st element
}
