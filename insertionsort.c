#include <stdio.h>

int main()
{
	int n,j;
	printf("Enter the Number of elements :");
	scanf("%d", &n);
	int A[n], v;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}

	for(int i=1; i<=n-1; i++)

	{ v=A[i]; j=i-1; 
	  

		while( j>=0 & A[j] > v)
		{
			
				A[j+1] = A[j];
				j=j-1;
				A[j+1] = v;
			
		}
	}

	printf("Sorted array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d  ", A[k]);
	}
	printf("\n");
}
