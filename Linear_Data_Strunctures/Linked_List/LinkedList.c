#include <stdio.h>
#include <stdlib.h>


struct Node {
    int value;
    struct Node *next;
}

struct Node *head = NULL;
struct Node *newNode;

void insertNewNodeFromFront(int newValue){
    newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode -> value = newValue;
    newNode -> next = head;
    head = newNode;
}

void insertNewNodeFromBack(int newValue){
    newNode = (struct Node *) malloc(sizeof(struct Node));
    if(head == NULL){
        newNode -> value = newValue;
        newNode -> next = head;
        head = newNode;
    }
    newNode -> value = newValue;
    newNode -> next = head -> next;
    
}

void deleteNode(){
    if(head == NULL){
        printf("List is empty!");
        return;
    }else{
        temp = head -> next;
        free(head);
        head = temp;
    }
}


void display(){
    struct Node *presentNode = head;  
    
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(presentNode != NULL) {  
        printf("%d ", presentNode->data);  
        presentNode = presentNode->next;  
    }  
    printf("\n");  
}

int main(){
    int option;
    while(1){
        
        printf("The Options are: \n");
        printf("1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
        scanf("%d", &option);
        switch(option){
            case 1: {
                int newNode;
                printf("Enter the New Node: ");
                scanf("%d", &newNode);
                insertNewNode(newNode);
            }

            case 2: {
                deleteNode()
            }

            case 3: {
                display();
            }

            case 4: {
                exit(0);
            }

            default: {
                printf("Wrong Option!")
            }
        }
    }

}