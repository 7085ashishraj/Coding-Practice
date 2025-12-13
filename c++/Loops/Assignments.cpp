//All odd number from 1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//         else{
//             continue;
//         }
//     }
// }

//All numbers from 1 to 100 i.e divisible by 3
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1;i<=100;i++){
//         if(i%3==0){
//             cout<<i<<" ";
//         }
//     }
// }

//Table of n ->n is user input

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<n<< "*"<< i << "=" << n*i<<endl;
//     }
// }

// A.P 4,7,10,13.....upto n terms

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=4;i<=3*n+1;i+=3){
//         cout<<i<<" ";
//     }
// }

//G.P 3,12,48,.....upto n terms
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a = 3;
//     int r = 4;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";
//         a *= 4;
//     }
// }

//print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
// #include<iostream>
// using namespace std;
// int main(){
//     for(char ch = 'a'; ch <='z';++ch){
//         cout<<"Enter character: "<<ch<<" ASCII value: "<<(int)ch<<endl;
//     }
//     for(char ch = 'A'; ch <='Z';++ch){
//         cout<<"Enter character: "<<ch<<" ASCII value: "<<(int)ch<<endl;
//     }
// }

//Sum of all the even digits of a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int sum = 0;
//     while(n>0){
//         int x = n%10;
//         if(x%2==0){
//             sum += x;
//         }
//         n/=10;
//         //cout<<"Sum of even digits is: "<<sum;
//     }
//     cout<<"Sum of even digits is: "<<sum;
// }

//WAP to print the sum of a given number and its reverse

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int reversed_no = 0;
//     int sum  = 0;
//     while(n>0){
//         int digit = n%10;
//         reversed_no = reversed_no*10 + digit;
//         sum+=digit;
//         n/=10;
//     }
//     cout<<sum<<endl;
//     cout<< reversed_no;
// }

// Factorial of first n numbers:
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int power = 1;
//     for(int i=1;i<=n;i++){
//         power*=i;
//         cout<<power<<endl;
//     }
// }

//print first n fibonacci numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 1,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i = 3;i<=n;i++){
        int next = a+b;
        cout<< next <<" ";
        a = b;
        b = next;
    }
}

//print all the armstrong numbers between 1 and 500

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int sum = 0;
//     for(int i=1;i<=500;i++){
//         int p = n%10;
//         int q = p*p*p;
//         sum+=q;
//         n/=10;
//     }
//     if(sum==n) cout<<n<<endl;
// }