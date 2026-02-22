// passing arguments 1. by value 2. by reference
#include <iostream> 
using namespace std;

// call by value , copied made here , take different memory stack

void changeA(int a) {
    a = 20;
    cout << a << "\n";
}

// pass by reference using pointers

void changeB(int *ptr) {
    *ptr = 99;
    cout << *ptr << "\n";
}

int main() {
    int a = 10;
    changeA(a);

    cout << a << "\n";

     int b = 12;
    changeB(&b);

    cout << b << "\n";

    
}
