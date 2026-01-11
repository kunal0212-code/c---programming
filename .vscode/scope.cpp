#include <iostream>
using namespace std;

// yaha num ka scope global hai , kahin pe v yehi use kar shkte hai
int num = 85; 

void sum(int a, int b)
{
    cout << num << endl;
    {
        // yaha pe x ka scope local hai
        int x = 25; 
        cout << x << endl;
    }

    int s = a + b;
    cout << s << endl;
}

int main()
{
    sum(5, 4);
    int s = 10;
    cout << s << endl;
    return 0;
}
