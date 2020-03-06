#include <stdio.h>

int main()
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int A[n], key;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}

	printf("Enter the key element to search: ");
	scanf("%d", &key);

	for(int i=0; i<n; i++)
	{
		if(A[i] == key)
		{
			printf("%d is at index %d\n", key, i);
			return 0;
		}
	}
	printf("The key element entered is not found!\n");

}