#include "stdafx.h"
#include "missing_number.h"


int missing_number(int ar[], int size)
{
	int sum = ((size + 1)*(size + 2)) / 2;

	for (int i = 0; i<size; i++)
	{
		sum = sum - ar[i];
	}
	return sum;
}
