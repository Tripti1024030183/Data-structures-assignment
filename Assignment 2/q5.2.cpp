//tri-diagonal matrix
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the size of matrix";
    cin>>n;
    int size=3*n-2;
    int diag[size];
    cout<<"enter elements(row major):";
    for(i=0;i<size;i++){
        cin>>diag[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                cout<<diag[n-1 + i]<<" ";
            }
            else if((i-j) == 1){
                cout<<diag[i - 1]<<" ";
            }
            else if((i-j) == -1){
                cout<<diag[2*n -1 + i]<<" ";
            }
            else
            cout<<"0";
        }cout<<endl;
    }
}
