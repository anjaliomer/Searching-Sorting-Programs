#include "stdafx.h"
#include "median_equal_sorted_arrays.h"
#include<iostream>

using namespace std;

int main()
{
	int ar_1[] = { 1,12,15,26,38 };
	int ar_2[] = { 2,13,17,30,45 };
	int size_1 = (sizeof(ar_1) / sizeof(ar_1[0]));
	int size_2 = (sizeof(ar_2) / sizeof(ar_2[0]));
	if (size_1 == size_2)
		cout << "Median : " << median(ar_1, ar_2, size_1) << endl;
	else
		cout << "\nOnly works for arrays of equal size\n";
	return 0;
}
