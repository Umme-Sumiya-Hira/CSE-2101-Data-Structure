#include<stdio.h>

void bubbleSort(int arr[],int N){
    for(int i=0;i<N-1;i++){
        int isSwap=0;
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;

                isSwap = 1;
            }
        }
        if(isSwap==0){
            return;
        }
    }
}
void printArray(int arr[],int N){
    printf("After Sorting : ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}


int main(){
    int arr[10]={45,25,15,30,20,35,40,10};
    int N = 8;
    printf("Befor sorting : ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    bubbleSort(arr,N);
    printArray(arr,N);
    return  0;
}