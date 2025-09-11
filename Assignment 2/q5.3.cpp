//upper diagonal matrix
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the size of matrix";
    cin>>n;
    int size=n*(n+1)/2;
    int diag[size];
    cout<<"enter elements(row major):";
    for(i=0;i<size;i++){
        cin>>diag[i];
    }
    int k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<=j){
                cout<<diag[k++]<<" ";
            }
            else
            cout<<"0";
        }cout<<endl;
    }
}
