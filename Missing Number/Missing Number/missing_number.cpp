#include "stdafx.h"
#include "missing_number.h"


int missing_number(int ar[], int size)
{
	int current = 0;
	int next = 1;

	while (next <= (size - 1))
	{
		if (ar[next] - ar[current] == 1)
		{
			current = current + 1;
			next = next + 1;
		}
		else
		{
			return(ar[current] + 1);
		}
	}
}
