#include "array.h"
#include <math.h>
#include "iostream"

using namespace std;

template <typename T, int count>
CMyArray<T, count>::CMyArray()
{
	this->n = count;
	A ={ 0 };
}

template <typename T, int count>
CMyArray<T, count>::CMyArray(int cnt)
{
	if (cnt <= 10) n = cnt;
	else n = 0;
	A = { 0 };
}

template <typename T, int count>
void CMyArray<T, count>::SetArr(T* arr)
{
	for (int i = 0; i < n; i++)
	{
		this->A[i] = arr[i];
	}
}

template <typename T, int count>
void CMyArray<T, count>::SetN(int n)
{
	if (n <= 10) this->n = n;
	else n = 0;

	for (int i = 0; i < n; i++)
		A[i] = (T)(i * 2);
}

template <typename T, int count>
T CMyArray<T, count>::Power(void)
{
	T sum = 0;
	if (n < 0) return;

	for (int i = 0; i < n; i++)
		sum += pow(A[i], 2);
	sum = (sum, 1.0 / 2.0);
	return sum;
}

template <typename T, int count>
T CMyArray<T, count>::GetItem(int index)
{
	return (T)A[index];
}

template <typename T, int count>
int  CMyArray<T, count>::GetN(void) const
{
	return n;
}

template <typename T, int count>
void CMyArray<T, count>::Print()
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}
