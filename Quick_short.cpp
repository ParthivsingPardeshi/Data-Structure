//incomplit quick short 

#include <iostream>
using namespace std;
int swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int part(int arr[],int low,int high){


}
int Quick(int arr[],int low,int high)
{
    if(low<high){
        int p=part(arr,low,high);
        Quick(arr,low,p-1);
        Quick(arr,p+1,high);
    }
}