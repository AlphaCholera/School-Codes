#include<stdio.h>
int god(int n)
{
	int i,sum=0;
	for (i=1;i<=n;i++)
		sum=sum+i;
	return sum;
}

int main()
{
	int n,val;
	printf("Enter a value:\n");
	scanf("%d",&n);
	val = god(n);
	printf("%d",val);
	return 0;
}