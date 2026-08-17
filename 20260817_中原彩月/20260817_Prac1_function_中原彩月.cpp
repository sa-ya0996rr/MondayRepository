#include <iostream>
#include "20260817_Prac1_header_中原彩月.h"
using namespace std;

// プレイヤーが選択した球種を表示する
void PitingType(int piting)
{
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;
	}
}

// ゲーム終了時の勝敗を判定して表示する
// 獲得したアウト数
// アウトが3以上ならプレイヤーの勝利、それ以外ならCPUの勝利
void Result(int out)
{
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}