#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int A[10][10],B[10][10];
    //matrix A
    cout<<"enter no of m rows and n columns";
    cin>>m>>n;
    cout<<"enter the elements:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        B[j][i]=A[i][j];
    }
   } 
    cout<<"original matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"new matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<B[i][j];
        }
        cout<<endl;
    }
    return 0;
}