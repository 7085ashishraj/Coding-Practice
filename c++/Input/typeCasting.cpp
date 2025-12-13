// #include<iostream>
// using namespace std;
// int main(){
//     //int, float, bool, char  -> typecasting
//     float x = 3.2;
//     int y = (int)x;
//     cout<<y;

//     char x = 'K';
//     int y = (int)x;
//     cout<<y;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'H';
//     int y = (int)ch;
//     int z = (y - 64);
//     int a = (char)z;
//     cout<<a;
// }


#include<iostream>
using namespace std;
int main(){
    float y;
    cin>>y;
    int x = (int)y;
    float z = (y - x);
    cout<<z;
}