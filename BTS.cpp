#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
};  
struct node *root;  
int main()  
{  
    int choice,val;  
    do   
    {  
        printf("\nEnter the value to insert\n");  
        scanf("%d",&val);  
        insert(val);  
        printf("\nPress 1 to insert other or press 0 to exit\n");  
        scanf("%d",&choice);  
    }while(choice == 1);
    return inorder(*root); 
}  
void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d",temp->data);
        inorder(temp->right);
    }
    return;
}
void insert(int val)  
{  
    struct node *NN, *preptr , *temp;  
    NN = (struct node *) malloc(sizeof (struct node));  
    if(NN == NULL)  
    {  
        printf("can't insert");  
    }  
    else   
    {  
    NN -> data = val;  
    NN -> left = NULL;  
    NN -> right = NULL;   
    if(root == NULL)  
    {  
        root = NN;  
        root -> left = NULL;  
        root -> right = NULL;  
    }  
    else   
    {  
        preptr= NULL;  
        temp=root;   
        while(temp!=NULL)  
        {  
            preptr=temp;   
            if(temp->data>val)  
            {  
                temp=temp->left;   
            }   
            else   
            {  
                temp=temp->right;  
            }  
        }  
        if(preptr->data>val)  
        {  
            preptr->left=NN;   
        }  
        else   
        {  
            preptr->right=NN;   
        }  
    }  
    printf("Node Inserted");  
    }  
}
