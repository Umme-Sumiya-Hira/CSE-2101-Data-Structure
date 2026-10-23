#include<stdio.h>

int arr[10]={12,2,45,6,7,232,4545,89};

void linearSearch(int arr[],int N,int element){
    int found = 0;
    for(int i=0;i<N;i++){
        if(arr[i]==element){
            found = 1;
            printf("%d is found in %d index",element,i);
            break;
        }
    }
    if(!found){
        printf("Element Not Found!!");
    }
}
int main(){
    int N = 8,element;
    
    printf("Enter the element: ");
    scanf("%d",&element);

    linearSearch(arr,N,element);               
    return 0;
}