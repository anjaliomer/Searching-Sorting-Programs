#include "stdafx.h"
#include "sorted_rotated_array.h"


int sorted_rotated_array(int ar[], int size, int num)
{
	int first = 0;
	int last = size - 1;

	while (first <= last)
	{
		int mid = first + (last - first) / 2;

		if (num == ar[mid])
			return mid;

		if (ar[first] <= ar[mid])                    //if lower array is sorted
		{
			if (num >= ar[first] && num < ar[mid])
				last = mid - 1;
			else if (num>ar[mid]||num<ar[first])
			    first = mid + 1;
		}

		else if (ar[first] >= ar[mid])               //if lower array not sorted
		{
			if (num > ar[mid] && num <= ar[last])
				first = mid + 1;
			else if (num<ar[mid] || num>ar[last])
			    last = mid - 1;
		}
	}
	return -1;
}


