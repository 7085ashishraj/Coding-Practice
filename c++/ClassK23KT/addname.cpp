// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     vector<string> v;
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;
//         v.push_back(str);
//     }

//     int m;
//     cout<<"Enter position u have to enter: ";
//     cin>>m;

//     string name;
//     cin>>name;

//     v.insert(v.begin()+m,name);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


#include <iostream>
using namespace std;

int i;
class LFC {
public:
    ~LFC()
     {
        i=10;
    }
};

int foo() {
    i=3;
    LFC ob;
    return i;
}
  
int main() {
    cout << foo();
    return 0;
}