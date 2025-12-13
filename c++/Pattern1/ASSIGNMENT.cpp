//1 1 1 1 
//2 2 2 2 
//3 3 3 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


//1 2 3 4
//1 2 3 
//1 2 
//1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//A
//A B
//A B C
//A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }

//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n+1;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0) cout<<j;
//             else cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }

//*
//**
//*** 
//****
//***
//**
//*


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     int nst = 1;
//     int nsp = n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }