#include <iostream>
using namespace std;

class abc {
private:
    int num1;

public:
    abc(int n){
        num1 = n;
    }
    friend abc operator+(abc m1, abc m2);

    void display() {
        cout << num1 << endl;
    }
};
abc operator+(abc m1, abc m2) {
    abc m3(0);
    m3.num1 = m1.num1 + m2.num1;
    return m3;
}

int main() {
    abc m1(10);
    abc m2(20);
    abc result(0); 
    result = m1 + m2; 
    result.display();
    return 0;
}