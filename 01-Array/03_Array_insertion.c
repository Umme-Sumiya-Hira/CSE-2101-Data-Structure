#include<stdio.h>

int main(){
    //5. Insert  item after a given value 

    int arr[10]={5,10,15,20,25,30,35,40};
    int n = 8, value,item,location=-1;

     printf("Before insertion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter value and item: ");
    scanf("%d %d",&value,&item);

    for(int i=0;i<n;i++ ){
        if(arr[i]==value){
            location = i;
            break;
        }
    }
    if(location != -1){
        for(int i=n-1;i>location;i--){
            arr[i+1]= arr[i];
        }
        arr[location+1]=item;
        n++;
        printf("After insertion: ");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        printf("ERR!!!");
    }

    return 0;
}