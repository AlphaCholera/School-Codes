#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
		printf("%d",i);
		}
	printf("\n");
	}
return 0;
}
