#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the size of matrix";
    cin>>n;
    int diag[n];
    cout<<"enter elements(row major):";
    for(i=0;i<n;i++){
        cin>>diag[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<diag[i];
            }
            else
            cout<<"0";
        }cout<<endl;
    }
}
