#include <stdio.h>
#include<malloc.h>
void push();
void pushmiddle();
void pushlast();
void exit();
struct node
{
	int data;
	struct node*next;
};

struct node*start=NULL;
int main()
{
	printf("/nenter 1 for push elemet at the 1st end :");
	printf("/nenter 2 for push the element at any position in the list :");
	printf("/nenter 3 for push the element at the end of the link list :");
	printf("/enter 4 to exit :");
	int ch;
	printf("/nenter your choise =/n");
	scanf("%d",&ch);
	if(ch>=4)
	switch(ch)
	{
		case 1:
			push();
			break;
		case 2:
			pushmiddle();
			break;
		case 3:
			pushlast();
			break;
		defult :
			exit();
	}
	else{
	
	return 0;}
}
void push()
{
	struct node*temp,*ptr;
	int item,i,n;
	printf("/nenter the number of node = ");
	scanf("/n%d",n);
	temp=( struct node*)malloc(sizeof(node));
	printf("\n enter a value =");
	scanf("\n%d",&item);
	temp->data=item;
	temp->next=NULL;
	
	start=temp;
	ptr=start;
	
	for(i=1;i<n;i++)
	{
		printf("\n enter the value of next node ");
		scanf("\n%d",item);
		
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data =item;
		temp->next =NULL;
		
		ptr->next=temp; 
		ptr=ptr->next;  
	}
}

