#include <iostream>
using namespace std;

void changeA(int param) {
    param = 33;
    cout << param << "\n";
}
// pass by reference using pointer
void changeA(int *ptr) {
    *ptr = 33;
}


int main() {
    int a = 10;
    int *ptr = &a;

    // &a used in bit manipulation as well as finding address of memory location...pointers take 8 byte and int take 4 byte

    int **pptr = &ptr;
    cout << &a << "=" << ptr <<"\n";

    // * with & becomes dereferencing operator i.e it will give the value of here either from &a or *ptr

    cout << *&a  <<"\n";
    cout << *ptr  <<"\n";

    // pptr is storing the address of ptr

    cout << &ptr << "=" << pptr <<"\n";

    cout << *ptr << "\n";
    return 0;
}
