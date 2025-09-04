#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    
    cout<<"enter the size of matix";
    cin>>n;
    int arr[n];
    
    cout<<"enter the element of array:";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
         for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
         if( arr[i]>arr[j]){
             count++;
         }
        }
        cout<<endl;
    }
    cout<<"no of inversions:"<<count<<endl;
}