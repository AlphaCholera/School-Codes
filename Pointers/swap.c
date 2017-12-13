//Call by Reference
#include<stdio.h>
void swap(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return;
}
int main()
{
	int a=10,b=20;
	printf("Initially a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("After swaping through pointers a=%d b=%d\n",a,b);
	return 0;
}