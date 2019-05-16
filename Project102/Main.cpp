#include "array.h"
#include <iostream>

using namespace std;

int main(void)
{
	int amount;

	CMyArray <int, 7> ai1;
	int arr[7];
	double arr2[8];
	for (int i = 0; i < 7; i++)
		cin >> arr[i];
	ai1.SetArr(arr);
	CMyArray <int, 8> ai2(6);
	for (int i = 0; i < 8; i++)
		cin >> arr[i];
	ai1.SetArr(arr);
	CMyArray <double, 4> ad1;
	for (int i = 0; i < 8; i++)
		cin >> arr2[i];

	int n, t;
	double x;

	n = ai1.GetN();
	n = ai2.GetN();
	n = ad1.GetN();

	t = ai1.GetItem(3);
	t = ai2.GetItem(0);
	x = ad1.GetItem(2);

	t = ai1.GetItem(3);

	x = ad1.GetItem(3);

	x = ad1.GetItem(3);

	x = ai1.Power();
	system("pause");
	return 0;
}