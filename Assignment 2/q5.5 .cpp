#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    
    cout<<"enter the size of matix";
    cin>>n;
    int size=n*(n+1)/2;
    int arr[size];
    int k=0;
    cout<<"enter the element of array:";
    for( i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cin>>arr[k++];
        }
    }
         for( i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(i>=j){
              cout<<arr[i*(i+1)/2+j]<<" ";
          }
          else
          cout<<arr[j*(j+1)/2+i]<<" ";
        }
        cout<<endl;
    }
}
