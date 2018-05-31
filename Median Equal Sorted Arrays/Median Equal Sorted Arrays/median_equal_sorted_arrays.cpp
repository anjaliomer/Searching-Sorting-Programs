#include "stdafx.h"
#include "median_equal_sorted_arrays.h"


int median(int ar_1[], int ar_2[], int size_1)
{
	if (ar_1[size_1 - 1] < ar_2[0])
		return ((ar_1[size_1 - 1] + ar_2[0]) / 2);

	if (ar_2[size_1 - 1] < ar_1[0])
		return ((ar_2[size_1 - 1] + ar_1[0]) / 2);

	int i = 0, j = 0, k = 0, m1 = -1, m2 = -1;
	while (k<size_1 + 1)
	{
		if (ar_1[i] <= ar_2[j])
		{
			m1 = m2;
			m2 = ar_1[i];
			i++;
			k++;
		}
		else
		{
			m1 = m2;
			m2 = ar_2[j];
			j++;
			k++;
		}
	}

	return ((m1 + m2) / 2);

}