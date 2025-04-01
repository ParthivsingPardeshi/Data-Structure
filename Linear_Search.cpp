#include <iostream>
using namespace std;
int main(){
    int arr[]={23,4,56,2,7,1};
    int n;
    cout<<"Enter the number to be searched: ";
    cin>>n;
    for (int i = 0; i < 6; i++)
    {
        if (n==arr[i])
        {
            cout<<"Element found at index: "<<i<<endl;
            break;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}