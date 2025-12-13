// Number Pyramid:-
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int nst = 1;
//     int nsp = n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++){
//             cout<<k;
//         }
//         nst+=2;
//         cout<<endl;
//     }
// }

//Alphabet pyramid:-

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<(char)(k+64);
//         }
//         cout<<endl;
//     }
// }

//Special alphabet pattern:-

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int m=i-1;m>=0;m--){
//             cout<<(char)(m+65);
//         }
//         for(int k=1;k<i;k++){
//             cout<<(char)(k+65);
//         }
//         cout<<endl;
//     }
// }