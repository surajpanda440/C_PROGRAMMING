#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct
{
    char name[50];
    char phone_no[10];
    char address[50];

}Contact;

struct node
{
    Contact data;
    struct node *rlink;
    struct node *llink;
};
typedef struct node *NODE;

NODE getnode(Contact contact)
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("\nInsufficient memory");
        exit(0);
    }
    x->data = contact;
    x->llink = NULL;
    x->rlink = NULL;
    return(x);
}
NODE phonebook;

void insert_contact(NODE head,Contact contact)
{
    NODE temp,cur,prev;
    temp = getnode(contact);
    cur=head->rlink;
    prev=head;
    while(cur!=NULL)
    {
        if(strcmp(temp->data.name,cur->data.name)<0)
        {
            cur->llink=temp;
            temp->rlink=cur;
            break;
        }
        prev = cur;
        cur=cur->rlink;
    }
    
    prev->rlink=temp;
    temp->llink=prev;
}

void delete_contact(NODE head,char name[25])
{
    NODE second,cur,prev;
    if(head->rlink==NULL)
    {
        printf("\nList is empty");
    }
    cur=head->rlink;
    while(cur!=NULL)
    {
        if(strcmp(cur->data.name,name)==0)
        {
            printf("[[[%s details are deleted]]]",cur->data.name);
            second=cur->rlink;
            prev=cur->llink;
            free(cur);
            prev->rlink=second;
            if(second != NULL)
                second->llink = prev;
            return;
        }
        cur=cur->rlink;
    }
    printf("%s is not found ",name);
}
void search_contact(NODE head,char name[25])
{
    NODE cur;
    if(head->rlink==NULL)
    {
        printf("\nList is empty");
        return;
    }
    cur=head->rlink;
    while(cur!=NULL)
    {
        if(strcmp(cur->data.name,name)==0)
        {
            printf("\n{{{%s is found}}}",name);
            printf("\nName :- %s\nPhone number :-%s \nAddress :- %s",cur->data.name,cur->data.phone_no,cur->data.address);
            return;
        }
        cur=cur->rlink;
    }
    printf("{{{%s is not found}}}",name);
    return;
}
void display(NODE head)
{
    NODE cur;
    if(head->rlink==NULL)
    {
        printf("\nsorry no informstion could found");
        return;
    }
    printf("\nContacts in Phone book are");
    cur=head->rlink;
    while(cur!=NULL)
    {
         printf("\nName :- %s\nPhone number :- %s \nAddress :-%s",cur->data.name,cur->data.phone_no,cur->data.address);
        cur=cur->rlink;
    }

}
int main()
{
    int choice;
    char name[50];
    Contact contact;
    int password=4546;
    NODE phonebook = getnode(contact);//head
    printf("********************************\n");
    printf("********************************\n");
    printf("[[[[[WELCOME TO PHONE BOOK]]]]]\n");
    printf("********************************\n");
    printf("********************************\n");
    while(1)
    {
    	printf("\n************************************************");
        printf("\n1-ADD CONTACT TO THE PHONE BOOK \n2-DELETE CONTACT FROM THE PHONE BOOK \n3-SEARCH CONTACT FROM THE LIST \n4-DISPLAY CONTACTS\n5-EXIT");
        printf("\n**********************************************");
        printf("\nenter your choice :-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter name :-");
                   scanf("%s",&contact.name);
                   printf("\nEnter Phone number:-");
                   scanf("%s",&contact.phone_no);
                   printf("\nEnter address :-");
                   scanf("%s",&contact.address);
                   printf("\n[[[YOUR INFORMATION SUCESSFULY ADDED ]]]\n\n");
                   insert_contact(phonebook,contact);
                   break;
            case 2:printf("\nEnter name to delete the contact info :-");
                    scanf("%s",&name);
                    delete_contact(phonebook,name);
                    printf("\n|||||||||||||||||||||||||||||||||||||||||\n");
                    break;
            case 3:printf("\nEnter name to scerch  the contact :-");
                    scanf("%s",&name);
                    search_contact(phonebook,name);
                    printf("\n||||||||||||||||||||||||||||||||||||||\n");
                    break;
            case 4:display(phonebook);
                   printf("\n|||||||||||||||||||||||||||||||||||||||\n");
                    break;
            case 5:exit(0);
            default:printf("\nInvalid choice");
        }

    }
return 0;
}
