// #include<iostream>
// #include<string>
// using namespace std;

// void printSubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));
// }

// int main(){
//     string str = "abc";
//     printSubset("",str);
// }

//m-2 idx laga ke khud karo....

// #include<iostream>
// #include<string>
// using namespace std;

// void printSubset(string ans,string original,int idx){
//     if(idx == original.length()){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[idx];
//     printSubset(ans+ch,original,idx+1);
//     printSubset(ans,original,idx+1);
// }

// int main(){
//     string str = "abc";
//     printSubset("",str,0);
//}

//m-3

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// void storeSubset(string ans,string original,vector<string> &v){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     storeSubset(ans+ch,original.substr(1),v);
//     storeSubset(ans,original.substr(1),v);
// }

// int main(){
//     string str = "abc";
//     vector<string> v;
//     storeSubset("",str,v);
//     for (string ele : v){
//         cout<<ele<<endl;
//     }
// }


