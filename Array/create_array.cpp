#include <iostream>
using namespace std;

int main() {
    int marks[5] = {1,2,3,4,5}; //0 to 4
    // marks[1] = 9;
    // cout << marks << endl;
    int n = sizeof(marks) / sizeof(int);
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0 ;
}
