#include<stdio.h>
int fib(int n);
int main()
{
	int n,al;
	printf("Enter a number : ");
	scanf("%d",&n);
	al = fib(n);
	printf("%d",al);
	return 0;
}

int fib(int n)
{
	if (n==1)
		return 0;
	if (n==2)
		return 1;
	return (fib(n-1)+fib(n-2));
}