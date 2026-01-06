#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int m = 6;
    int a = 4;
    int b = 4;
    int c = 5;
    int d = 6; 
    char ch = 'A';
    
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

       //new pattern half pyramid

       for (int i=1; i<=c ; i++){
        for (int j=1 ; j<=i ; j++){
            cout << j;
        }
        cout << endl;
       }
      //character pyramid pattern
       for (int i=1; i<=d; i++) {
        for (int j=1; j<=i; j++) {
            cout << ch ;
            ch++;
        }
        cout << endl;
       }
       
       //hollow rectangle pattern(nice q)
       int e = 5 ; 

       for (int i = 1; i<=e ; i++) {
        cout << "*" ; //first
        for (int j=1; j<=e-1; j++) {
            if (i == 1 || i == e) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "*" << endl; //last
       }
        //inverted rotated half pyramid
        int f = 5;
        
        for (int i=1; i<=f; i++) {
           
            //spaces
            for (int j=1; j<=f-i; j++) {
                cout << " ";
            }
            //stars
            for(int j=1; j<=i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        //Floyd's Triangle
        int g = 5;
        int num = 1;

        for (int i=1; i<=g ; i++) {
            for (int j=1; j<=i ; j++) {
                cout << num++ << " ";
            }
            cout << endl;
        }
       
        int h = 4;

        //1st pyramid
        for(int i=1; i<=h; i++) {
            //spaces
            for(int j=1; j<=h-i; j++) {
                cout << " ";
            }
            //stars
            for(int j=1; j<=2*i-1; j++) {
                cout << "*";
            }
            cout << endl;
        }

        //2nd pyramid
        for (int i=h ; i>=1; i--){
            //spaces
            for (int j=1; j<=h-i; j++) {
                cout << " ";

            }
            //stars
            for(int j=1; j<=2*i-1; j++) {
                cout << "*";

            }
            cout << endl;

        }
        return 0;
}


