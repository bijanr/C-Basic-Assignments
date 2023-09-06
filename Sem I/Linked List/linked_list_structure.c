#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;

node *insert_node(int limit);

node *display_node(node *current,int *array);

void main()
{
    node *ROOT;
    int limit;
    printf("Enter the nth node : ");
    scanf("%d",&limit);
    int *array;
    ROOT=insert_node(limit); 
    display_node(ROOT,array);
}

node *insert_node(int limit)
{
    node *head=NULL;
    node *temp=NULL;
    node *current=NULL;

    printf("Enter the values :\n");
    for(int i=0;i<limit;i++)
    {
        temp=(node *)malloc(sizeof(node));
        printf("Node %d : ",i+1);
        scanf("%d",&temp->value);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            current=head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=temp;
        }
    }
    return head;
}

node *display_node(node *head,int *array)
{
    node *current=head;
    int i=0;
    printf("The elements in this Linked list is : \n");
    while(current!=NULL)
    {
        printf("%d  ",current->value);
        current=current->next;
    }
    
}