#include <iostream>
using namespace std;

int main() 
{
    // 1. Delete value of 1st index

    int arr[10]={5,10,15,20,25,30,35,40};
    int n = 8;
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    n--;
    cout<<"After deleting first index: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // 2. Delete value of last index

    n--;
    cout<<"After deleting last index: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 3. Delete value of K th index
    int k=2;
    for(int i=k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    n--;
    cout<<"After deleting k th index: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}