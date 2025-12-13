#include<iostream>
using namespace std;
int a = 9; //global variable
void fun(int x,int y){
    cout<<"address of fun x "<<&x<<endl;
    cout<<"address of fun y "<<&x<<endl;
}
void f(){
    cout<<a;
}
int main(){
    int x = 3;
    int y = 7;
    cout<<"address of fun x "<<&x<<endl;
    cout<<"address of fun y "<<&x<<endl;
    fun(x,y);
    cout<<a+7<<endl;
    f();
}

//Bs itna yaad rakho ki scope of variables me define hota hai
//local and global variable

//local variable ki priority zyada hoti hai gloabal se!!!!
//function ke andar jo values aap de rhe ho oosi me intialize karke declare v kar sakte hai par agar func call ke time v paramaters de diye fir wha par priorities call wale value ko dii jaayegi