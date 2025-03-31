#include <iostream>
using namespace std;
int main(){ 
    int arr[]={23,4,56,2,7,1};
    for (int i = 0; i < 6-1; i++)
    {
        int min=i;
        for (int j = i+1; j < 6; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"shorted array is: " ;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
}