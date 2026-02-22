// brute force approach to calculate max subarray sum.

#include <iostream>
#include <climits>
using namespace std;


void maxsubarraysum1(int *arr , int n) {
    int maxSum = INT_MIN;

    for(int start = 0; start<n ; start++) {
        for(int end=start; end<n; end++) {
            int currSum = 0;
            for(int i =start; i<=end; i++) { //this we optimize in next approach.
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum , currSum);
        }

        cout << endl;
    }

    cout << "maximum subarray sum = " << maxSum << endl;
}


int main ()  {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    maxsubarraysum1(arr,n);

    return 0;
}
