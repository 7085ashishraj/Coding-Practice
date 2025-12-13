#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str = "ashish is a good boy";
    stringstream ss(str);
    string temp;

    while(ss>>temp){ // ss input de rha hai temp ko
        cout<<temp<<endl;
    }
}
//     int target;
//     cin>>target;

//     int len = str.length();

//     bool flag = false;
//     for(int i=0;i<len;i++){
//         if(temp[i]==target){
//             flag = true;
//             break;
//         }
//     }
//     if(flag==true)cout<<target<<"is present";
//     else cout <<"is not present";
// }