//Array Traversing on linear data structure
#include <iostream>
using namespace std;
int main()
{
    int arr [5] ;
    cout << "Enter 5 elements of the array: " ;
    for (int  i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    // Traversing the array
    cout<<"Elements in Array is ";
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    // Searching an element in the array
    int s;
    cout<<"Enter the element to be searched: ";
    cin>>s;
    for (int  i = 0; i < 5; i++)
    {
        if (s==arr[i])
        {
            cout<<"Element found at index "<<i<<endl;
            break;
        }
        else
        {
            cout<<"Element not found in the array"<<endl;
        }
        
    }
    // Sorting the array
    
    
} 
