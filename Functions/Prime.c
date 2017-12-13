#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int flag=0,i;
	for (i=2;i<=sqrt(n);i++)
		if ((n%i)==0)
			flag++;
	return flag;
}

int main()
{
	int n,val;
	printf("Enter a number: ");
	scanf("%d",&n);
	val = prime(n);
	if (val==0)
		printf("Prime number.");
	else
		printf("Non Prime number.");
	return 0;
}