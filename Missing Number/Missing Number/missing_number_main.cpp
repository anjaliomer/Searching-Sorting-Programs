#include "stdafx.h"
#include"missing_number.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 1,3,4,5,6,7,8,9,10 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int rtvl = missing_number(ar, size);
	if (rtvl != -1)
		cout << "\nMissing Number is " << rtvl;
	return 0;
}
