#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

int main(){
    node *head, *list;
    head = malloc(sizeof(node));
    int limit;
    printf("Enter the limit of the list: ");
    scanf("%d", &limit);
    printf("Enter the head node: ");
    scanf("%d", &head->data);
    head->next = NULL;
    list = head;

    for(int i = 1; i < limit; i++){
        node *temp = (node*)malloc(sizeof(node)); 
        printf("Enter the %d node: ", i);
        scanf("%d", &temp->data);
        temp->next = NULL;
        if(list != NULL){
            list->next = temp;
            list = list->next;
        }
    } //end of loop


    list = head;
    while(list != NULL){
        printf("%d ", list->data);
        list = list->next;
    }

    return 0;
}