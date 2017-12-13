#include <stdio.h>
int main()
{
	int A[10],i,j,k,min=A[0],index,n,temp;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	for (j=0;j<n;j++)
	{
		for (k=j+1;k<n;k++)
		{
			if (A[k]<min)
			{
				min=A[k];
				index=k;
			}
		temp=A[i];
		A[i]=A[index];
		A[index]=temp;
		}
	}
	for (i=0;i<n;i++)
		printf("%d",A[i]);
	return 0;
}
