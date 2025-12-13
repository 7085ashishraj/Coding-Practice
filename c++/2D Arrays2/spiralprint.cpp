#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;

    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int minr = 0, maxr = m-1;
    int minc = 0, maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j];
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc];
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j];
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc];
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
}