// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     unordered_map<string, int> mp; //humesha key/value pair me hi store hota hai

//     pair<string,int> p1;
//     p1.first = "Ashish";
//     p1.second = 01;

//     // pair<string,int> p2;
//     // p2.first = "Ayush";
//     // p2.second = 02;

//     // pair<string,int> p3;
//     // p3.first = "Aakash";
//     // p3.second = 03;

//     //Insertion in map in O(1): 
//     mp.insert(p1);
//     //mp.insert(p2);
//     //mp.insert(p3);

//     for(pair<string , int>  p : mp){ // for(auto p: mp)
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }

//Aise insertion karna better rhega....


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int > mp;

    //just ye likhna hai INSERTION  ke liye
    mp["Ashish"] = 01; //ye insert v apne aap ho gya pair bnane ki jaroorat nahi hai
    mp["Ayush"] = 02;
    mp["Ishan"] = 03;

    //for DELETION
    mp.erase("Ishan"); //bs key likhni hai

    for(auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}

