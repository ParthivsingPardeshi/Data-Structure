#include <iostream>
using namespace std;
int Binary_S(int arr[], int n, int s);
int main()
{
    int n,S;
    cout<<"Enter the Limit of the Array: ";
    cin>>n;

    int *arr =new int[n];
    cout << "Enter the elements of the array: " ;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the Element to be searched: ";
    cin>>S;

    int result = Binary_S(arr,n,S);

    cout<<"Element found at index: "<<result<<endl;
    return 0;
}
int Binary_S(int arr[],int n,int s){
    int low=0,hight=n-1,mid;
    while (low<=hight)
    {
        mid= low +(hight-low)/2;

        if (arr[mid]==s)
        {
            return mid;
        }
        if (arr[mid]<s)
        {
            low=mid+1;
        }
        else
        {
            hight=mid-1;
        }
        
    }
    return -1;
}