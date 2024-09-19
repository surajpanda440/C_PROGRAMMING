#include <stdio.h>
void sum(int,int);
void substration(int,int);
void mult(int,int);
void devide(int,int);
int main()
{
	int ch,a,b,c;
	printf(" endet 1 for addition \n");
	printf("enter 2 is for substraction \n");
	printf("enter 3 for multipication \n");
	printf("enter 4 for devsion");
	printf("\n");
	scanf("\n %d",&ch);
	if (ch <5){
	
	switch (ch)
	{
		case 1:
			printf("\n enter the 1st number =");
			scanf("\n %d",&a);
			printf("\n enter the 2nd number = ");
			scanf("\n %d",&b);
			sum(a,b);
			break;
		case 2:
			printf("\n enter the 1st number =");
			scanf("\n %d",&a);
			printf("\n enter the 2nd number = ");
			scanf("\n %d",&b);
			substration(a,b);
			break;
		case 3:
			printf("\n enter the 1st number =");
			scanf("\n %d",&a);
			printf("\n enter the 2nd number = ");
			scanf("\n %d",&b);
			mult(a,b);
			break;
		case 4:
			printf("\n enter the 1st number =");
			scanf("\n %d",&a);
			printf("\n enter the 2nd number = ");
			scanf("\n %d",&b);
			devide(a,b);
			break;
	}}
	else
	{
	printf("\n kindly select number by given instruction");
	printf("\n ERROR \n");}
}
void sum(int a,int b)
{
	int total;
	total =a+b;
	printf("the total sum = %d ",total);
	
}
void substration (int a,int b)
{
	int subs;
	subs=a-b;
	printf("\n the substraction value = %d",subs);
}
void mult(int a,int b)
{
	int mul;
	mul=a*b;
	printf("\n the multiple value is = %d",mul);
}
void devide(int a,int b)
{
	int dev;
	dev=a/b;
	printf("\n the devided value = %d",dev);
}
