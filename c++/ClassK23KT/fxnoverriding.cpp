// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show_data()
//     {
//         cout << "Base Function" << endl;
//     }
// };

// class B : public A {
// public:
//     void show_data()
//     {
//         cout << "Derived Function" << endl;
//     }
// };

// int main()
// {
//     A Obj1;
//     Obj1.show_data();
    
// }


// Progrsm to allocate and deallocate one memory location:

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *p = NULL;
    p = new int;
    // if(!p){
    //     cout<<"Memory allocation failure"<<endl;
    // }
    if(p==NULL){
        cout<<"Memory allocation failure"<<endl;
    }
    else {
        cout<<"Memory allocated"<<endl;
        *p = 12;
        cout<<"Integer value stored is: "<<*p<<endl;
        delete p;
        cout<<"Memory allocated"<<endl;
    }
}