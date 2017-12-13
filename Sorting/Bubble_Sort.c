#include <stdio.h>
int main()
{
	int A[100],i,round,N,j,temp;
	printf("Enter number of elements.\n");
	scanf("%d",&N);
	printf("Enter the %d numbers.\n",N);
	for (i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	for (round=1;round<=N-1;round++)
	{
		for (j=0;j<=N-1-round;j++)
		{
			if(A[j]>A[j+1])
			{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
			}
		}
	}
	printf("Sorted list in ascending order:\n");
	for (i=0;i<N;i++)
	{
		printf(" %d",A[i]);
	}
	return 0;
}
