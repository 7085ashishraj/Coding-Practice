#include<iostream>
#include<algorithm>
using namespace std;

void input_heights(int arr[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void output_heights(int arr[],int n){
    cout<<"Print heights: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done";
    cout<<endl;
}

void output_prv_grt(int prv_grt[],int n,int heights[]){
    int max = heights[0];
    prv_grt[0] = -1;
    for(int i=1;i<n;i++){
        prv_grt[i] = max;
        if(max<heights[i]){
            max = heights[i];
        }
    }

}

void output_nxt_grt(int nxt_grt[],int n,int heights[]){
    int max = heights[n-1];
    nxt_grt[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        nxt_grt[i] = max;
        if(max<heights[i]){
            max = heights[i];
        }
    }
}

void output_mini(int mini[],int prv_grt[],int nxt_grt[],int n){
    for(int i=0;i<n;i++){
        mini[i]= min(prv_grt[i],nxt_grt[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int heights[n];
    input_heights(heights,n);
    output_heights(heights,n);
    int prv_grt[n];
    output_prv_grt(prv_grt,n,heights);
    int nxt_grt[n];
    output_nxt_grt(nxt_grt,n,heights);
    int mini[n];
    output_mini(mini,prv_grt,nxt_grt,n);
    int water = 0;
    for(int i=1;i<n;i++){
        if(heights[i]<mini[i]){
            water+=mini[i]-heights[i];
        }
    }
    cout<<"Total water trapped: "<<water<<endl;
}