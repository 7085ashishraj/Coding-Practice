#include<iostream>
using namespace std;
void swap(int &x , int &y){ //pass by reference sasta waala
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int x = 8 , y = 6;
    swap(x , y);//swap(x,y)  DRY Run karna!!
    cout<<x<<" "<<y;
}