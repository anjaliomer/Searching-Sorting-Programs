#include "stdafx.h"
#include"sorted_rotated_array_recursive.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 5,6,7,8,9,10,1,3,4 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int num;
	cout << "\nSorted Rotated Array : Upto 25 values can be searched\n";
	for (int i = 0;i < 25;i++)
	{
		cout << "\nEnter the number to be searched\n";
		cin >> num;
		int rtvl = sorted_rotated_array(ar, 0, size - 1, num);
		if (rtvl != -1)
			cout << "\nNumber found at index " << rtvl << "\n";
		else
			cout << "\nNumber not found\n";
	}
	return 0;
}