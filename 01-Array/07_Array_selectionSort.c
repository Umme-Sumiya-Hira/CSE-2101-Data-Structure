#include<stdio.h>

void selectionSort(int arr[],int N){
    for(int i=0;i<N-1;i++){
        int smallestIndex = i;
        for(int j = i+1;j<N;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        if(smallestIndex != i){
            int temp = arr[i];
            arr[i]=arr[smallestIndex];
            arr[smallestIndex]=temp;
        }
        
        // to see change in every step
    //      for(int k=0;k<N;k++){
    //     printf("%d ",arr[k]);
    // }
    // printf("\n");

        

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
    selectionSort(arr,N);
    printArray(arr,N);

    return 0;
}