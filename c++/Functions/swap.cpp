#include<iostream>
using namespace std;
void swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}

//function se direct swapping nhi hoti DRY run karke try kar lo!!
//pass by value,pass by reference concept
//Pointer ka use hoga!!

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b; //a = 3, b = 8
//     int temp = a; //temp = 3
//     a = b; //a = 8
//     b = temp; //b =3
//     cout<<a<<" "<<b;
// }