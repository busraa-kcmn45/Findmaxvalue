#include<stdio.h>
#include<stdlib.h>
int findMaxValue(int n,int* Ptr,int max);
int main()
{
	int n;
	int result;
	int max;
	printf("enter the n: ");
	scanf_s("%d", &n);
	int*dizi = malloc(n * sizeof(int));
	if (dizi == NULL)
	{
		return 0;
	}
	max = dizi[0];
	for (int i = 0;i < n;i++)
	{
		printf("enter the %d.dizi: ", i);
		scanf_s("%d", &dizi[i]);
		
	}
	result = findMaxValue(n,dizi,max);
	printf("max value is: %d", result);
	free(dizi);
	return 0;
}
int findMaxValue(int n,int* Ptr, int max)
{ 
	
	max = *Ptr;
	for (int i = 0;i<n;i++)
	{
		if (*(Ptr + i) > *Ptr)
		{
			max = *(Ptr + i);
		}
	}
	return max;
}