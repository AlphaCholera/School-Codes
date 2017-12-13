#include<stdio.h>
int fact(int n);

int main()
{
	int n,val;
	printf("Enter a number:\n");
	scanf("%d",&n);
	val = fact(n);
	printf("%d",val);
	return 0;
}

int fact(int n)
{
	if (fact==0)
		return n;
	else
		return n*fact(n-1);
}
