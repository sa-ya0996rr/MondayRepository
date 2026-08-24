#include <iostream>		// coutやendlを使うためのライブラリ
using namespace std;	// std::を省略して使えるようにする

int main(void)
{
	// 変数aを作り、初期値0を代入する
	int a = 0;
	// ポインタpを作り、aのアドレスを代入する
	int* p = &a;

	// aの現在の値（0）を表示する
	cout << "aの初期値" << a << endl;

	// pが指している場所（=a）に10を代入する
	*p = 10;

	// 変更されたaの値（=10）を表示する
	cout << "aの変更後の値" << a << endl;

	return 0;	// プログラムを正常に終了する
}