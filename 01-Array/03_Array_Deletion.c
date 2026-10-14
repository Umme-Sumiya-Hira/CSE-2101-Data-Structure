#include<stdio.h>

int main(){
    // delete item after a given value 

    int arr[10]={5,10,15,20,25,30,35,40};
    int n = 8,value,location = -1;
    
    //before delete item
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
     printf("Enter value: ");
     scanf("%d",&value);

     for(int i=0;i<n;i++){
        if(value==arr[i]){
            location = i;
            break;
        }
     }
     if(location != -1 && location != n-1){
        for(int i=location+1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        //after delation
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
     }
     else{
        printf("ERR!!");
     }


    return 0;
}