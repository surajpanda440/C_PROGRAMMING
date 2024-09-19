#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node*head=NULL;
int main()
{
	struct node*p,*q;
	int i,n,item;
	printf("\enter the total number of node ");
	scanf("\n,%d",n);
	printf("\n enter data of the head node ");
	scanf("%d",item);
	
	q=(struct node*)malloc(sizeof(struct node));
	q->data=item;
	q->next=NULL;
	
	head=q;
	p=head;
	
	for(i=1;i<n;i++)
	{
		printf("\n enter the value of next node ");
		scanf("\n%d",item);
		
		q=(struct node*)malloc(sizeof(struct node));
		q->data =item;
		q->next =NULL;
		
		p->next=q;   // us here to link one node to anothe node
		p=p->next;  //use here to jump 
	}
	printf("\n printing the link list ");
	p=head;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
	return 0;
	
}
