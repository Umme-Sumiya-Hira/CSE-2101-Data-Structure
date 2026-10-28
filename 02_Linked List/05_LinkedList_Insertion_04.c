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
// insert before e given value
void insertBeforeValue(int givenValue,int insertValue){
    struct Node *NN = newNode(insertValue) ;
    struct Node *ptr = head;
    if(head->data == givenValue){
        NN->next = head;
        head = NN;

        return ;
    }
    else{
        while(ptr->next != NULL && ptr->next->data != givenValue){
            ptr=ptr->next;
        }
        if(ptr->next != NULL){
            NN->next = ptr->next;
            ptr->next = NN;
        }
        else{
            printf("Value Not Found !\n");
        }
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
    insertBeforeValue(40,25);
    traverse();
    
    

    return 0;
}