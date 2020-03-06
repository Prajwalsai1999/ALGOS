#include <stdio.h>

int main()
{
	int n;
	printf("Enter the Number of elements :");
	scanf("%d", &n);
	int A[n], temp;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}

	for(int i=0; i<=n-2; i++)
	{
		for(int j=0; j <= n-2-i; j++)
		{
			if (A[j+1] < A[j])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}

	printf("Sorted array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d  ", A[k]);
	}
	printf("\n");
}