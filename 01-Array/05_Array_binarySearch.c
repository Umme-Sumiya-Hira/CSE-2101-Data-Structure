#include<stdio.h>

int binarySearch(int arr[],int N, int Item){
    int low=0,high=N-1,mid;
    while (low<=high)
    {
        mid=(low+high)/2;
        
            if(arr[mid]==Item){
                return mid;
            }
            else if(arr[mid]<Item){
                low = mid + 1;
            }
            else high = mid-1;
        
    }
    return -1;
    
}
int main(){
        int arr[10]={10,20,30,40,50,60,70,80};
        int N = 8, Item=40;
        
        int index = binarySearch(arr,N,Item);
        
        if(index != -1)
        printf("The item %d found in index: %d",Item,index);
        else
        printf("Item Not Found!!!");
       
        
    return 0;
}