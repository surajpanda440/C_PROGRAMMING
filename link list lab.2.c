#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=NULL;
	int n;
	printf("Enter number of Elemnts to be inserted!!\n");
	scanf("%d",&n);
	int i,num;
	printf("Enter a number !!\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
	head=insertbeg(head,num);	
	}
	printf("Enter a number to be inserted at end!!\n");
	int numend;
	scanf("%d",&numend);
	head=insertend(head,numend);
	int num2;
	printf("Enter number to be inserted at a spot\n");
	scanf("%d",&num2);
	head=insertatspot(head,num2);
	traversal(head);
	
}
int insertbeg(struct node *head,int data)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	head=ptr;
	return head;
}
int insertend(struct node *head,int data)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=NULL;
	ptr->data=data;
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=ptr;
	return head;

}
int insertatspot(struct node *head,int data)
{
	struct node *temp;
	struct node *pre;
	temp=head;
	pre=head;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	printf("Enter value after which you want to insert!!\n");
	int a;
	scanf("%d",&a);
	while(temp->next!=NULL)
	{
		if(temp->data==a)
		{
			pre->next=ptr;

			ptr->next=temp;
		}
		pre=temp;
		temp=temp->next;
	}
	return head;	

}
void traversal(struct node *head)
{
	printf("The Final linked list is = \n");
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}
