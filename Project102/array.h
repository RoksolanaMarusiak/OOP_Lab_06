#pragma once

template <typename T, int count>
class CMyArray
{
private:
	int n;
	T A[10];
public:
	CMyArray();
	CMyArray(int cnt);
	int GetN(void) const;
	void SetN(int n);
	void SetArr(T *arr);
	T GetItem(int index);
	T Power(void);
	void Print();
};
