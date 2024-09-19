#include <stdio.h>
void insertion(int);
void deletion(int);
void transversal();
int a[10];
int main()
{
    int j;
    printf("Enter 10 numbers in array");
    for(j=0;j<9;j++)
    {
        scanf("%d",a[j]);
    }
    int choice;
    printf("For insertion enter 1");
    printf("For  insertion and deletion enter 2");
    printf("For transversal enter 3");
    printf("To exit enter 4");
    scanf("%d",choice);
    int i;
    for (i=1;i<=choice;i++)
    {
        switch(choice)
        {
        case 1:
        int pos;
        printf("Enter the position to be insertion");
        scanf("%d",&pos);
        insertion(pos);
        break;
        case 2:
        int del;
        printf("Enter the position to be deleted");
        scanf("%d",&del);
        deletion(del);
        case 3:
        transversal();
        break;
        case4:
        printf("EXIT");
        break;
        }
    }

}
void insertion(int pos)
{
    int ele,i;
    printf("Enter element to be inserted");
    scanf("%d",&ele);
    for(i=8;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    printf("Final array after insertion=");
    for ( i = 0; i <10; i++)
    {
        printf("%d\n",a[i]);
    }
}
void deletion( int del)
{
	int i;
    for(i=del;i<10;i++)
    {
        a[i]=a[i+1];
    }
    printf("The Final array after deletion=");
    for(i=0;i<9;i++)
    {
        printf("%d\n",a[i]); 
    }
}
void transversal()
{
	int i;
    printf("The Final array after evaluation is =");
    for (i=0;i<9;i++)
    {
        printf("%d\n",a[i]);
    }
}
