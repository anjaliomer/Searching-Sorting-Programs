#include "stdafx.h"
#include "median_sorted_arrays.h"

int median (int ar_1[], int ar_2[], int size_1, int size_2)
{
	int size = (size_1 + size_2)/2;
	int i = 0, j = 0, k = 0, m1=-1, m2 =-1;
	while (i < size_1 && j < size_2)
	{
		if (k > size)
			break;
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


	while (i < size_1)
	{
		if (k > size)
			break;
		m1 = m2;
		m2 = ar_1[i];
		i++;
		k++;
	}

	while (j < size_2)
	{
		if (k > size)
			break;
		m1 = m2;
		m2 = ar_2[j];
		j++;
		k++;
	}

	if ((size_1+size_2) % 2 == 0)
		return ((m1 + m2) / 2);
	else
		return(m2);
}