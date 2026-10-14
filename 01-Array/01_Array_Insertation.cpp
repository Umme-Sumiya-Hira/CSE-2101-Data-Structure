#include <iostream>
using namespace std;

int main() 
{
    // 1. Insert value in 1st index

    int arr[10]={10,20,30,40,50};
    int n = 5,firstValue;
    cout<<"Enter first index value : ";
    cin>>firstValue;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=firstValue;
    n++;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // 2. Insert value in last index
    int lastValue;
    cout<<"Enter Last index value: ";
    cin>>lastValue;
    arr[n]=lastValue;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 3. Insert value in K th index
    int k = 3,kValue ;
    cout<<"Enter K th index value: ";
    cin>>kValue;
    for(int i=n-1;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=kValue;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}