#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int ele) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == ele)
            return mid;

        if (arr[mid] < ele)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

int main(){
    int n,arr[n],ele;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element to be searched:";
    cin>>ele;
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = binarySearch(arr, n, ele);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}
