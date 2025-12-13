// #include<bits/stdc++.h>
// using namespace std;

#include <iostream>
#include <stdexcept>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num)) {
        throw runtime_error("Error: Prime input caused an exception.");
    } 

    return 0;
}