#include "stdafx.h"
#include "missing_number.h"


int missing_number(int ar[], int size)
{
	for (int i = 1; i < size;i++)
		if ((ar[i] - ar[i - 1]) != 1)
			return(ar[i] - 1);
}
