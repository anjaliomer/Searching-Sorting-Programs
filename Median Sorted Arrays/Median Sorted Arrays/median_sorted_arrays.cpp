#include "stdafx.h"
#include "median_sorted_arrays.h"

int median(int*ar, int size_1, int size_2)
{
	int size = size_1 + size_2;
	if (size % 2 == 0)
		return ((ar[(size - 1) / 2] + ar[size / 2]) / 2);
	else
		return(ar[(size - 1) / 2]);
}


int* merge(int ar_1[], int ar_2[], int size_1, int size_2)
{
	static int *ar = new int[size_1 + size_2];
	int i = 0, j = 0, k = 0;
	while (i < size_1 && j < size_2)
	{
		if (ar_1[i] <= ar_2[j])
		{
			ar[k] = ar_1[i];
			i++;
			k++;
		}
		else
		{
			ar[k] = ar_2[j];
			j++;
			k++;
		}
	}

	while (i < size_1)
	{
		ar[k] = ar_1[i];
		i++;
		k++;
	}

	while (j < size_2)
	{
		ar[k] = ar_2[j];
		j++;
		k++;
	}
	return ar;
}