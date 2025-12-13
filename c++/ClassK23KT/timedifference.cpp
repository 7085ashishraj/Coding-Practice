#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int timetosec(int h,int m,int s){
    return h*3600 + m*60 + s;
}

int main(){
    int h1,m1,s1,h2,m2,s2;
    char colon;

    cin>>h1>>colon>>m1>>colon>>s1;
    cin>>h2>>colon>>m2>>colon>>s2;

    int time1 = timetosec(h1,m1,s1);
    int time2 = timetosec(h2,m2,s2);

    int diff = abs(time1 - time2);

    int diffH = (diff / 3600);
    int diffM = (diff % 3600) / 60;
    int diffS = (diff % 60);

    cout<<setw(2)<<setfill('0')<<diffH<<":"
    <<setw(2)<<setfill('0')<<diffM<<":"
    <<setw(2)<<setfill('0')<<diffS;


}