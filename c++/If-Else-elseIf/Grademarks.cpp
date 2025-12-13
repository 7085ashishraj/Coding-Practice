// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter marks: ";
//     cin>>n;
//     if(n>=91 && n<=100){
//         cout<<"Excellent";
//     }
//     else if(n>=81 && n<=90){
//         cout<<"Very Good";
//     }
//     else if(n>=71 && n<=80){
//         cout<<"Good";
//     }
//     else if(n>=61 && n<=70){
//         cout<<"Can do better";
//     }
//     else if(n>=51 && n<=60){
//         cout<<"Average";
//     }
//     else if(n>=40 && n<=50){
//         cout<<"Below Average";
//     }
//     else{
//         cout<<"Fail";
//     }
//     return 0;
// }

//using nested if-else
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks: ";
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n>=81){
            cout<<"Very Good";
        }
        else{
            if(n>=71){
                cout<<"Good";
            }
            else{
                if(n>=61){
                    cout<<"Can do better";
                }
                else{
                    if(n>=51){
                        cout<<"Average";
                    }
                    else{
                        if(n>=41){
                            cout<<"Below Average";
                        }
                        else{
                            cout<<"Fail";
                        }
                    }
                }
            }
        }
    }
}