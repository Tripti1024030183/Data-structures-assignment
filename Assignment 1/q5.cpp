#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int A[10][10];
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
    
    cout<<"\n sum of each row: \n";
   for(int i=0;i<m;i++)
   {
       int rowSum=0;
    for(int j=0;j<n;j++)
    {
        rowSum+=A[i][j];
    }
    cout<<"row "<<i+1<<": "<<rowSum<<endl;
   } 
     
    cout<<"\n sum of each column \n";
   for(int j=0;j<n;j++)
   {
       int columnSum=0;
    for(int i=0;i<m;i++)
    {
        columnSum+=A[i][j];
    }
    cout<<"column "<<j+1<<": "<<columnSum<<endl;
   } 
   
   
    
 
    return 0;
}