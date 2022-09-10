#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,lcm;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	for(lcm=a>b?a:b;lcm<=a*b;lcm++)
	{
		if(lcm%a==0&&lcm%b==0)
		    break;
	}
	printf("LCM is %d",lcm);
	getch();
	
}
