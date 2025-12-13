#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            if (cnt == 1) {
                cout << v[i-1] << endl;
                return 0; // Exit the program after printing the element
            }
            cnt = 1; // Reset the count for the new element
        } else {
            cnt++;
        }
    }
    if (cnt == 1) {
        cout << v[v.size() - 1] << endl; // Check the last element if it has a count of 1
    }
}