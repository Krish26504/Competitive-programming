#include <algorithm>
#include <iostream>

using namespace std;
bool isTriplet(int arr[], int n)
{
    // Square array elements
    for (int i = 0; i < n; i++){
            sort(arr, arr + n);
               for (int i = n - 1; i >= 2; i--) {
                int l = 0;
                int r = i-1;
                while(l<r){
                    if(arr[l] + arr[r] == arr[i])
                    return true;
                }
    }
    }
}