#include<iostream>
using namespace std;

int main(){
    int *p,a,**p1;
    cout<<"Enter the value of a: ";
    cin>>a;
    p = &a;
    p1 = &p;
    cout<<"address of variable a using ptr: "<<p<<endl;
    p = p+0;
    cout<<"modified address of variable a using ptr: "<<p<<endl;
  
    cout<<"value of variable a using ptr is: "<<*p<<endl;
    *p=*p+20;
    cout<<"modified value of variable a using ptr is: "<<*p<<endl;
    cout<<"address of pointer p is: "<<p1;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int *p, a, **p1;

//     cout << "Enter the value of a: ";
//     cin >> a;

//     p = &a;

//     p1 = &p;

//     cout << "Address of variable a using pointer p: " << p << endl;
    
//     cout << "Value of variable a using pointer p: " << *p << endl;

//     cout << "Address of pointer p using pointer to pointer p1: " << p1 << endl;

//     *p = *p + 20;

//     cout << "Modified value of variable a: " << *p << endl;

//     return 0;
// }
