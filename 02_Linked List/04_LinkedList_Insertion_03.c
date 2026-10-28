#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head = NULL;
struct Node *newNode(int value){
    struct Node *NN = NULL;
    NN = (struct Node*)malloc(sizeof(struct Node));
    NN->data= value;
    NN->next = NULL;

    return NN;
}
// insert after a given value
void insertAfterValue(int givenValue, int insertValue){
    struct Node *NN= newNode(insertValue);
    struct Node *ptr;
    ptr = head;
    
    while( ptr != NULL && ptr->data !=givenValue){
            ptr=ptr->next;
    }
    if(ptr!=NULL){
       NN->next= ptr->next;
       ptr->next = NN;

    }
    else{
        printf("Value Not found!\n");
        return ;
    }
    
}

void traverse(){
    struct Node *ptr;
    ptr= head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }
}

int main(){
    struct Node *NN = NULL,*ptr = NULL;
    
     for(int i=1;i<=10;i++){
        NN = newNode(i*10);
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
    insertAfterValue(50,55);
    traverse();
    

    return 0;
}
