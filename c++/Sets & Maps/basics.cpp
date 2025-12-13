#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    //insert elements in random order
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);

    // s.erase(5); //for deletion

    cout<<s.size()<<endl; //for finding size


    //check if any element is present or not 
    int target = 6;
    if(s.find(target)!=s.end()){ //!= iska mtlb target exist karta hai aur agar seedha == hai mtlb target exist nahi karta
        //mil gaya lekin end ke barabar nahi hai
        cout<<"exists"<<endl;

    }
    else{
        cout<<"does not exist"<<endl;
    }

    //for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }


}