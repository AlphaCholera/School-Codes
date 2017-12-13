#include<stdio.h>
int func (int a, int b);
int main()
{
	int x,y,sum;
	printf("Enter any two numbers:");
	scanf("%d%d",&x,&y);
	sum = func (x,y);
	printf("%d",sum);
	return 0;
}

int func (int a, int b)
{
	int c;
	c=a+b;
	return c;
}
