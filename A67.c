#include<stdio.h>
#include<conio.h>
int main()
{
	int n,count;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(count=0;n!=0;count++)
	    n=n/10;
	printf("There are %d digits",count);
	getch();
}
