#include "stdafx.h"
#include "missing_number.h"

int missing_number(int ar[], int size)
{
	int x1 = ar[0];

	for (int i = 1; i < size ;i++)
	{
		x1 = x1 ^ ar[i];
	}

	int x2 = 1;

	for (int i = 2; i <= (size+1) ; i++)
	{
		x2 = x2 ^ i;
	}

	return (x1 ^ x2);
}
