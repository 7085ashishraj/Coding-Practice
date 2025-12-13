//Default

// #include<iostream>
// using namespace std;
// class square{
//     private:
//     int side;
//     //int breadth;
//     public:
//     square(){
//         side = 10;
//         //breadth = 10;
//     }
//     int area(){
//         return side*side;
//     }
// };

// int main(){
//     square s;
//     cout<<"Area of square is: "<<s.area()<<endl;
//     return 0;
// };



//Parameterized

// #include<iostream>
// using namespace std;
// class square{
//     private:
//     int side;
//     //int breadth;
//     public:
//     square(int s){ 
//         side = s;
//         //breadth = b;
//     }
//     int area(){
//         return side*side;
//     }
// };

// int main(){
//     square s(5);
//     cout<<"Area of square is: "<<s.area()<<endl;
//     return 0;
// };

#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }
};

int main(){
    rectangle r(5 , 6);
    cout<<"Area of rectangle is: "<<r.area()<<endl;
    return 0;
};












