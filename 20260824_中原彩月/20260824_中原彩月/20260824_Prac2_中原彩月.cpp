#include <iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 10,20,30,40,5 };
	int* pNum;
	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << "numbers[" << i << "]F" << *(pNum + i) << endl;
	}

	return 0;
}