#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
} *head = NULL;

struct Node *newNode(int value){
    struct Node *NN = NULL;
    NN = (struct Node*)malloc(sizeof(struct Node));
    NN->data = value;
    NN->next = NULL;

    return NN;
}
  // insertion at beginning
void insertAtBeginning(int value){
    struct Node *NN = newNode(value);
    NN->next = head;
    head=NN;
}

void traversal(){
    struct Node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }
}

int main(){
 struct Node *N1= newNode(10);
    head = N1;

    struct Node *N2 = newNode(20);
    head->next = N2;

    struct Node *N3 = newNode(30);
    N2->next = N3;

    insertAtBeginning(0);

    //another way;
    // insertAtFirst(30);
    // insertAtFirst(20);
    // insertAtFirst(10);
    // insertAtFirst(0);
    
    traversal();


    return 0;
}