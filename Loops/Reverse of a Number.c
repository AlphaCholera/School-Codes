#include<stdio.h>
int main()
{
	int a, s;
	printf("Enter value of a: ");
	scanf("%d",&a);
	for(s=0;a>0;a=a/10)
	{
	s = s*10;
	s = s + (a%10);   
	}
	printf("Reverse number is: %d",s);
return 0;
}
