#include <stdio.h>

void sort(int *arr, int len)
{
	int i, j, t;
	for(i=0; i<len; i++)
		for(j=i+1; j<len; j++)
			if( arr[i]>arr[j] )
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
}

int main()
{
	int A[100];
	int z;
	
	for(z=0; z<10; z++)
		scanf("%d", A+z);
	sort(A, 10);
	
	for(z=0; z<10; z++)
		printf("%d ", A[z]);
	printf("\n");
	
	return 0;
}

