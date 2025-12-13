#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    int y = (int)ch;
    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==121 || ch==65 || ch==69 || ch==73 || ch==79 || ch==89){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
}