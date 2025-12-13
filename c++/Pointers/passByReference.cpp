//ye code run nhi karega
// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// int main(){
//     int a,b;
//     int a = 8,b = 9;
//     //cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }

#include<iostream>
using namespace std;
void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a , b;
    cin>>a;
    cin>>b;
    swap(&a , &b);//swap(x,y)  DRY Run karna!!
    cout<<a<<" "<<b;
}