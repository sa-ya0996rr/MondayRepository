#include <iostream>
using namespace std;

int main(void)
{
	// 配列
	int ary[5] = { 0,20,33,55,48 };
	int* pAry;

		pAry = ary;

	// pAryは配列の先頭を指す
	pAry = ary;
	for (int i = 0; i < 5; i++)
	{
		cout << "&ary["<<i<<"]：" << i << "" << pAry << endl;
		cout <<"pAry：" << pAry + i << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "pAry：" << *(pAry + i) << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> *(pAry + i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "pAry：" << *(pAry + i) << endl;
	}

	return 0;
}