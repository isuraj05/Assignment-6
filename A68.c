#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n/2+1)
	    printf("It is a prime number");
	else
	    printf("It is not a prime number");
	getch();
	
}
