#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr > er || sc>ec) return 0;
    if(sr == er && sc==ec) return 1;
    int rightways = maze(sr, sc+1, er, ec);
    int downways = maze(sr+1, sc, er, ec);
    int totalways = rightways + downways;
    return totalways;
}

// void Printpath(int sr, int sc, int er, int ec, string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;
//         return;
//     }
//     Printpath(sr,sc+1,er,ec,s+'R'); //right
//     Printpath(sr+1,sc,er,ec,s+'D');; //down
// }

void printpath(int row,int col,string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printpath(row,col-1,s+'R'); //right
    printpath(row-1,col,s+'D');//down
}

int main(){
    //cout<<maze(0,0,2,2); 
    //Printpath(1,1,3,3,"");
    printpath(3,3,"");
}