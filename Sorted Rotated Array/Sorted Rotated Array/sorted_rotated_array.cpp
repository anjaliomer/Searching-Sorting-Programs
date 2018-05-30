#include "stdafx.h"
#include "sorted_rotated_array.h"

int sorted_rotated_array(int ar[], int size, int num)
{
	int hi = find_pivot(ar, size);
	int first;
	int last;

	if (num >= ar[hi + 1] && num <= ar[size - 1])
	{
		first = hi + 1;
		last = size - 1;
		return binary_search(ar, first, last, num);
	}
	else if (num >= ar[0] && num <= ar[hi])
	{
		first = 0;
		last = hi;
		return binary_search(ar, first, last, num);
	}
	else
		return -1;
}

int find_pivot(int ar[], int size)
{
	for (int i = 1; i < size; i++)
		if ((ar[i] - ar[i - 1]) < 0)
			return (i - 1);
}

int binary_search(int ar[], int first, int last, int num)
{
	while (first <= last)
	{
		int mid = first + (last - first) / 2;
		if (ar[mid] == num)
			return mid;
		else if (ar[mid] < num)
			first = mid + 1;
		else if (ar[mid] > num)
			last = mid - 1;
	}
	return -1;
}
