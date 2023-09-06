#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

node *createLinkedList(int limit);

node *displayList(node *head);

int main()
{
    int limit=0;
    node *HEAD=NULL;
    printf("Enter the limit of the Linked List : ");
    scanf("%d",&limit);
    HEAD=createLinkedList(limit);
    displayList(HEAD);
}


node *createLinkedList(int limit)
{
    int i=0;
    node *head=NULL;
    node *temp=NULL;
    node *point=NULL;
    printf("Enter the data of :\n");
   for(int i=0;i<limit;i++)
   {
    
    temp=(node*)malloc(sizeof(node));
    printf(" Node %d : ",i+1);
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        point=head;
        while(point->next!=NULL)
        {
            point=point->next;
        }    
        point->next=temp;
    }
    
   }
   return head;
}


node *displayList(node *head)
{
    node *point=head;
    printf("The elements of Linked List are : \n");
    while(point!=NULL)
    {
        printf("%d ",point->data);
        point=point->next;
    }
}
