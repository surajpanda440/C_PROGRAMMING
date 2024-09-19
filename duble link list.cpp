#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
};
struct node *start,*ptr;
void insbeg()
{
    struct node *newnode;
    int data;
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = start;
    if(start!=NULL)
    {
        start->prev=newnode;
    }
    start = newnode;
    printf("\n**Inserted \n");
}
void inspot()
{
    struct node *temp;
    temp=start;
    ptr=start;
    int data,val;
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    printf("\nEnter the before node to be inserted : \n");
    scanf("%d", &val);
    struct node*newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data=data;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            printf("\nfound\n");
            break;
        }
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
    newnode->next=temp;
    temp->prev=newnode;
    printf("\ninserted at the spot\n");

}
void insend()
{

    struct node *temp;
    int data;	
	struct node *newnode = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    newnode->data=data;
    if(start==NULL)
    {
        newnode->next=NULL;
        start=newnode;
    }
    else{
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    printf("\ninserted at the end\n");
}
void delbeg()
{
    struct node *temp;
    temp=start;
    start=start->next;
    free(temp);
    start->prev=NULL;
    printf("\ndeleted at the beginning\n");

}
void delend()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("underflow\n");
    }
    else {
        temp=start;
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp;
        free(temp);
        ptr->next=NULL;
    }
}
void delspot()
{
    struct node *temp,*ptr;
    int val;
    printf("\nEnter the spot\n");
    scanf("%d",&val);
    {
        temp=start;
        while(temp->data!=val)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->prev=ptr;
        free(temp);
    }
}
void traverse()
{
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
    for (struct node * temp=start; temp!=NULL; temp=temp->next)
    {
    printf("%d <->", temp->data );
    }
    printf("NULL \n");
    }
}
void travend()
{
    struct node *temp,*end;
    temp=start;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp=temp->next;
    end=temp;
    while(end!=start)
    {
        end=end->prev;
        printf("%d <->", end->data );
    }
    printf("NULL \n");
}
int main()
{
    int choice;
    while(1){
    printf("\nEnter 1 to insert at beginning\nEnter 2 to insert at end\nEnter 3 to insert at a spot\nEnter 4 to delete beginning\nEnter 5 to delete end\nEnter 6 to delete at the spot\nEnter 7 to traverse from end\n");
    scanf("%d",&choice);
    {
        switch (choice)
        {
        case 1:
            insbeg();
            traverse();
            break;

        case 2:
            insend();
            traverse();
            break;
        case 3:
        	inspot();
            traverse();
        	break;
        case 4:
            delbeg();
            traverse();
            break;
        case 5:
            delend();
            traverse();
            break;
        case 6:
            delspot();
            traverse();
            break;     
        case 7:
            travend();
            break;  
        default:
            break;
        }
    }
	}
    return 0;
}
