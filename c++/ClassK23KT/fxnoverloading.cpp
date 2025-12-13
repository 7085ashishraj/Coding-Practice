#include<iostream>
using namespace std;
class Overloading{
public:
    int area(int side){
        return (side * side);
    }

    int area(int length, int breadth){
        return (length * breadth);
    }

    int area(float radius){
        return(3.14 * radius * radius);
    }
};

int main(){
    Overloading obj;
    cout << "Area of square: " << obj.area(5) << endl;
    cout << "Area of rectangle: " << obj.area(4,5) << endl;
    cout << "Area of circle: " << obj.area(5) << endl;
    return 0;
}