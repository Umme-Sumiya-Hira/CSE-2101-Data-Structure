#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head = NULL;
struct Node* newNode(int value){
    struct Node *NN = NULL;
    NN = (struct Node *)malloc(sizeof(struct Node));
    NN->data = value;
    NN->next = NULL;

    return NN;
}
void traversal(){
    struct Node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node *N1= newNode(10);
    head = N1;

    struct Node *N2 = newNode(20);
    head->next = N2;

    struct Node *N3 = newNode(30);
    N2->next = N3;
    
    traversal();
    

    return 0;
}