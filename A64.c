#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	    sum=sum+i*i;
	printf("Sum is %d",sum);
	getch();
	
}
