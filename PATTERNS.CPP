#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int m = 6;
    int a = 4;
    int b = 4;
    
        // outer loop
        for (int i = 1; i <= n; i++)
    {
        // inner loop
        for (int j = 1; j <= m; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    

    //print star pattern
    //outer loop
    for (int i = 1 ; i<=a; i++ ) {
        for (int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
   
    //inverted star 
    

    for (int i=1 ; i<=b; i++){
        for (int j=1; j<=(b-i+1); j++) {
            cout<< "*";
        }
        cout << endl;
    }

       return 0;
}


