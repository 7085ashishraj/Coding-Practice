// last occurence of x in the array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int x = 6;
//     int idx = -1;
//     for(int i=0;i<5;i++){
//         if(v[i]==x) idx = i;
//     }
//     cout<<idx;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(4);
    v.push_back(9);
    v.push_back(3);
    int x = 9;
    int idx = -1;
    for(int i=v.size();i>0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;
}