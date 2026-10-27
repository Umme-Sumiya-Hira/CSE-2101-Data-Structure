#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
} *head = NULL;

void newLink(){
    for(int i=1;i<=10;i++){
        struct Node *NN = NULL ,*ptr = NULL;
        NN = (struct Node*)malloc(sizeof(struct Node));
        NN->data = i*10;
        NN->next= NULL;
        if(i==1){
            head = NN;
        }
        else{
            ptr = head;
            while(ptr ->next != NULL){
               ptr=ptr->next;
            }
                ptr->next = NN;
        }

    }
        struct Node *ptr = head;
        
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr= ptr->next;
        }
    
}
int main(){
    newLink();

    return 0;
}