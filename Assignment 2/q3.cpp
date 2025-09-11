#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;   
        }
    }
    return -1;
}

int main() {
     int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Missing number: " << findMissing(arr, n) << endl;
    return 0;
}
