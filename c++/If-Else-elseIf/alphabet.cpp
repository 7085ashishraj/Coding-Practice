#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int y = (int)ch;
    if(y>=97 && y<=122 || y>=65 && y<=90){
        cout<<"It is Alphabet";
    }
    else{
        cout<<"not a alphabet";
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     int y = int(ch);
//     if((65 <= y && y <= 90) || (97 <= y && y <= 122)){
//         cout<<"It is Alphabet";
//     }
//     else{
//         cout<<"not a alphabet";
//     }
// }