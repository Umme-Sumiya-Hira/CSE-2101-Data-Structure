#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head ;
struct Node *newNode(int value){
    struct Node *NN = NULL;
    NN = (struct Node*)malloc(sizeof(struct Node));
    NN->data = value;
    NN->next = NULL;

    return NN;
}

void addToLinkedList(struct Node*NN,int i){
    if(i%2 != 0){
        NN->next = head;
        head = NN;
    }
    else{
        struct Node *ptr;
        ptr = head;
        while(ptr->next != NULL) ptr=ptr->next;
        ptr->next = NN;
    }
}
void traverseLinkedList(){
    struct Node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }
}

int main(){
    struct Node *NN = NULL;
    head = NULL;
    for(int i=1;i<=10;i++){
        NN = newNode(i*10);
        addToLinkedList(NN,i);
        traverseLinkedList();
        printf("\n");
    }



    return 0;
}