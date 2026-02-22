#include <iostream>
#include <climits>
using namespace std;

void trap(int *heights , int n) {
    int leftmax[20000] , rightmax[20000];
    leftmax[0] = INT_MIN;
    rightmax[n-1] = INT_MIN;

    for(int i=1; i<n; i++) {
        leftmax[i] = max(leftmax[i-1] , heights[i-1]);
    }

    for(int i=n-2; i>=0; i--) {
        rightmax[i] = max(rightmax[i+1] , heights[i+1]);
    }

    int water = 0;
    for(int i=0; i<n; i++) {
        int level = min(leftmax[i] , rightmax[i]) - heights[i];
        if(level > 0) water += level;
    }
    cout << "trapped water = " << water << endl;
}

int main() {
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights , n);

    return 0;
}
