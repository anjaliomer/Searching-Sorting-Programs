//This method will work irrespective of the size of the arrays

#include "stdafx.h"
#include "median_sorted_arrays.h"
#include<iostream>

using namespace std;

int main()
{
	int ar_1[] = { 1,12,15,26,38 };
	int ar_2[] = { 2,13,17,30 };
	int size_1 = sizeof(ar_1) / sizeof(ar_1[0]);
	int size_2 = sizeof(ar_2) / sizeof(ar_2[0]);
	int *ar = merge(ar_1, ar_2, size_1, size_2);
	int med = median(ar, size_1, size_2);
	cout << "Median : " << med << endl;
	return 0;
}

