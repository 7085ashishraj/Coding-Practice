// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual int area() = 0;
// };

// class Square : public Shape {
// public:
//     int side;
//     Square(int s) : side(s) {}
//     int area(){                   // Overriding ka v use kar sakte hai!!!
//         return side * side;
//     }
// };

// class Rectangle : public Shape {
// public:
//     int length, breadth;
//     Rectangle(int l, int b) : length(l), breadth(b) {}
//     int area(){
//         return length * breadth;
//     }
// };

// int main(){
//     Square sq(5);
//     Rectangle rect(4, 6);

//     cout << "Area of square: " << sq.area() << endl;
//     cout << "Area of rectangle: " << rect.area() << endl;
// }


#include<iostream>
using namespace std;
class sample
{
public:
virtual void example()=0;
void show()
{
cout<<"\nThis is sample abstract class";
}
};
class derived1:public sample
{
public:
void example()
{
cout<<"C++";
}
};
class derived2:public sample
{
public:
void example()
{
cout<<"\nC";
}
};
int main()
{
sample *ptr;//Base pointer
//sample obj;//Compile time error(Creating object of abstract class)
derived1 obj1;
derived2 obj2;
ptr=&obj1;//Currently pointer is pointing towards derived1
ptr->example();
ptr->show();
ptr=&obj2;//Currently pointer is pointing towards derived2
ptr->example();
ptr->show();
return 0;
}