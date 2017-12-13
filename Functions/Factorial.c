#include<stdio.h>
int fact(int n)
{
	int i,fact=1;
	for (i=1;i<=n;i++)
		fact*=i;
	return fact;
}

int main()
{
	int ans,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	ans = fact(n);
	printf("%d",ans);
	return 0;
}
