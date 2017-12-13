#include<stdio.h>
int main()
{
	int a,b,c,i,hcf;
	printf("Enter the 2 nos.");
	scanf("%d%d%d",&a,&b,&c);
	{
	if (a>0 && b>0 && c>0)
	{
	for (i=1;i<=a && i<=b && i<=c;i++)
	{
	if (a%i==0 && b%i==0 && c%i==0)
	hcf = i;
	}
	printf("HCF = %d",hcf);
	}
	else
	printf("HCF cant be calculated.");
	}
return 0;
}
