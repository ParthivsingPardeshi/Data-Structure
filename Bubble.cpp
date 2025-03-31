//Bubble short algorithm
#include <iostream>
using namespace std;
int main(){
    int arr[]={3, 6, 1, 8, 3};
    for (int  i = 0; i < 5; i++)
    {
        for (int  j = 0 ;j < 5; j++)
        {
            if (arr[j]>arr[j+1])    
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    cout<<"shorted array is: " ;
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}