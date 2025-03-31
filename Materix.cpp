#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the dimansion of the matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the matrix: " ;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Elements of the matrix: " ;
    for (int i = 0; i < n; i++)
    {
        cout<<"\n";
        for (int  j = 0; j < m; j++)
        {
            cout<<arr[i][j];"\t";
        }
    
    }
}