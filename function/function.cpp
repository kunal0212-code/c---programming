//what are functions in C++?
#include <iostream>
using namespace std;

void sayPotato() { //function declare
    cout << "Potato :) \n";
    cout << "Potato :) \n";
    cout << "Potato :) \n";
}

void assistant() {
    sayPotato();    
    cout << "work done\n" ;

}

int sum(int a , int b) { //a,b are parameters
    int sum = a+b;
    return sum;
}

int difference(int a, int b) { //a,b are parameters
    int difference = a - b;
    return difference;
}

//practise Qs
//Q. WAF to find the product of 2 numbers - a & b.
int prod(int a, int b) {
    return a*b ;
}

// WAF to print if a number is odd or even.
// logic - even -> true ; odd -> false 
bool isEven(int n) {
    if (n % 2 == 0 ) {
        return true;
    }
    else {
        return false;
    }
}

//WAF to print the factorial of number n.
int factorial (int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout << "factorial(" << n << ") =  "<< fact << endl;
    return fact;
}

//function call in Memory


int main () {
    int s = sum(5,3); //5,3 are arguments
    cout << "sum is " << s << endl;
    int d = difference(9,4); //9,4 are arguments
    cout << "difference is " << d << endl;
    int p = prod(5,2);
    cout << "product is " << p << endl;
    cout << isEven(19) << endl;
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    
    assistant(); // calling assistant function
    return 0;
}

//forward declaration
// parameters with syntax


