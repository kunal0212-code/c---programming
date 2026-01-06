#include <iostream>
using namespace std;

int main() {
    int d = 6; 
    char ch = 'A';

    for (int i=1; i<=d; i++) {
        for (int j=1; j<=i; j++) {
            cout << ch ;
            ch++;
        }
        cout << endl;
       }
       return 0;
}