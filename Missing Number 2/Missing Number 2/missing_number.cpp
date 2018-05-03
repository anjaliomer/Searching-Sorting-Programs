#include "stdafx.h"
#include "missing_number.h"


int missing_number(int ar[], int size)
{
	int sum = (size*(size + 1)) / 2;

	for (int i = 0; i<(size - 1);i++)
	{
		sum = sum - ar[i];
	}
	return sum;
}
