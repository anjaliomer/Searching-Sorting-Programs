#include "stdafx.h"
#include "sorted_rotated_array_recursive.h"


int sorted_rotated_array(int ar[], int first, int last, int num)
{

	if (first <= last)
	{
		int mid = first + (last - first) / 2;

		if (num == ar[mid])
			return mid;

		if (ar[first] <= ar[mid])                    //if lower array is sorted
		{
			if (num >= ar[first] && num < ar[mid])
				return sorted_rotated_array(ar, first, mid - 1, num);
			else if (num>ar[mid] || num<ar[first])
				return sorted_rotated_array(ar, mid + 1, last, num);
		}

		else if (ar[first] >= ar[mid])               //if lower array not sorted
		{
			if (num > ar[mid] && num <= ar[last])
				return sorted_rotated_array(ar, mid + 1, last, num);
			else if (num<ar[mid] || num>ar[last])
				return sorted_rotated_array(ar, first, mid - 1, num);
		}
	}
	return -1;
}




