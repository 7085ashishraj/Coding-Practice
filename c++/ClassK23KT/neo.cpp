// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     bool flag = true;
//     for(int i=2;i<sum-1;i++){
//         if(sum%i==0){
//             flag = false;
//             break;
//         }
//     }
//     if(flag == false){
//         for
//     }
//     else cout<<"No valid print sum found";
// }


// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }

//     int m = v.size()-1;

//     //sort(v.begin(),v.end());
//     reverse(v.begin(),v.end());
//     int sum = 0;
//     for(int i=0;i<n-1;i++){
//         sum += v[i];
//     }

//     //int m = v.size()-1;
//     bool flag = true; // it is prime
//     for(int i=2;i<sum-1;i++){
//         //int m = v.size()-1;
//         if(sum%i==0){
//             flag = false;
//             break;
//             //v.pop_back(m-1);
//         }
//     }
//     if(flag = true) cout<<sum;
//     else cout<<"No valid print sum found";
    

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int cnt = 0;
//     int move_element = -1;
//     for(int i=0;i<n-1;i++){
//         if(!(arr[i]>=arr[i-1] && arr[i]<=arr[i+1])){
//             cnt++;
//             move_element = arr[i];
//         }
//     }
//     if(cnt>1) cout<<"Non_decreasing order cannot be formed";
//     else cout<<"Move Gadget"<<move_element;
    
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int cnt = 0;
//     int move_element = -1;

//     // Checking for elements that are out of order
//     for (int i = 1; i < n; i++) {
//         // Check if arr[i] is NOT in non-decreasing order with its previous element
//         if (arr[i] < arr[i - 1]) {
//             cnt++;
//             move_element = arr[i - 1];  // Store the problematic element (arr[i-1])
//         }
//     }

//     if (cnt > 1) {
//         cout << "Non-decreasing order cannot be formed" << endl;
//     } else (cnt == 1) {
//         cout << "Move Gadget: " << move_element << endl;
//     } //else {
//     // //     cout << "The array is already in non-decreasing order" << endl;
//     // // }

//     return 0;
// }






























// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v;
//     for (int i = 0; i < n; i++) {
//         int q;
//         cin >> q;
//         v.push_back(q);
//     }

//     reverse(v.begin(),v.end());
//     while (true) {
//         // Calculate the sum of the current vector
//         int sum = 0;
//         for (int i = 0; i < v.size(); i++) {
//             sum += v[i];
//         }

//         // Check if the sum is prime
//         bool isPrime = true;
//         for (int i = 2; i * i <= sum; i++) {
//             if (sum % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         // If the sum is prime, we're done
//         if (isPrime) {
//             cout << sum;
//             break;
//         }

//         // If the sum is composite, delete the adjacent elements
//         // and try again
//         for (int i = 1; i < v.size() - 1; i++) {
//             if (v[i - 1] == v[i] || v[i] == v[i + 1]) {
//                 v.erase(v.begin() + i); // Delete the middle element
//                 i--; // Adjust the index to account for the deletion
//             }
//         }

//         // If the vector is empty after deletion, no valid sum found
//         if (v.empty()) {
//             cout << "No valid print sum found";
//             break;
//         }
//     }

//     return 0;
// }